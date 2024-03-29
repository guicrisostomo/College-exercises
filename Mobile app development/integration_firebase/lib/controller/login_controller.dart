import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

import '../pages/util.dart';

class LoginController {
  //
  // CRIAÇÃO DE UMA NOVA CONT 
  //
  void criarConta(context, nome, email, senha) {
    FirebaseAuth.instance
        .createUserWithEmailAndPassword(email: email, password: senha)
        .then((res) {
      //Armazenar o nome no Firestore
      FirebaseFirestore.instance.collection('usuarios').add({
        "uid": res.user!.uid.toString(),
        "nome": nome,
      });

      sucesso(context, 'Usuário criado com sucesso.');
      Navigator.pop(context);
    }).catchError((e) {
      switch (e.code) {
        case 'email-already-in-use':
          erro(context, 'O email já foi cadastrado.');
          break;
        case 'invalid-email':
          erro(context, 'O email é inválido.');
          break;
        default:
          erro(context, e.code.toString());
      }
    });
  }

  //
  // LOGIN DO USUÁRIO
  //
  void login(context, email, senha) {
    FirebaseAuth.instance
        .signInWithEmailAndPassword(email: email, password: senha)
        .then((res) {
      sucesso(context, 'Usuário autenticado com sucesso.');
      Navigator.pushReplacementNamed(context, 'principal');
    }).catchError((e) {
      switch (e.code) {
        case 'invalid-email':
          erro(context, 'O formato do email é inválido.');
          break;
        case 'user-not-found':
          erro(context, 'Usuário não encontrado.');
          break;
        case 'wrong-password':
          erro(context, 'Senha incorreta.');
          break;
        default:
          erro(context, e.code.toString());
      }
    });
  }

  //
  // ESQUECEU A SENHA
  //
  Future<void> esqueceuSenha(email) async {
    await FirebaseAuth.instance.sendPasswordResetEmail(email: email);
  }

  //
  // LOGOUT
  //
  void logout() {
    FirebaseAuth.instance.signOut();
  }

  //
  // RETORNAR USUÁRIO LOGADO
  //
  Future<String> retornarUsuarioLogado() async {
    var uid = FirebaseAuth.instance.currentUser!.uid;
    var res;
    await FirebaseFirestore.instance
        .collection('usuarios')
        .where('uid', isEqualTo: uid)
        .get()
        .then(
      (q) {
        if (q.docs.isNotEmpty) {
          res = q.docs[0].data()['nome'];
        } else {
          res = "";
        }
      },
    );
    return res;
  }
}