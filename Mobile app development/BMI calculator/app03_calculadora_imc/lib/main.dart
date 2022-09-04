// ignore_for_file: prefer_const_literals_to_create_immutables, prefer_const_constructors, avoid_unnecessary_containers

import 'package:flutter/material.dart';
import 'dart:math';
void main() {
  runApp(
    const MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'IMC',
      home: TelaPrincipal(),
    ),
  );
}

//
// TELA PRINCIPAL
// Stateful = stf

class TelaPrincipal extends StatefulWidget {
  const TelaPrincipal({Key? key}) : super(key: key);

  @override
  State<TelaPrincipal> createState() => _TelaPrincipalState();
}

class _TelaPrincipalState extends State<TelaPrincipal> {
  //Atributos
  var txtPeso = TextEditingController();
  var txtAltura = TextEditingController();

  //Chave única usada para validação do form
  var formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      //BARRA DE TÍTULO
      appBar: AppBar(
        title: Text('Calculadora IMC'),
        centerTitle: true,
        flexibleSpace: Container(
          decoration: const BoxDecoration(
            gradient: LinearGradient(
              begin: Alignment.topCenter,
              end: Alignment.bottomCenter,
              colors: <Color>[Colors.red, Colors.blue]
            ),
          ),
        ),
        //backgroundColor: Colors.blue.shade900,
      ),
      
      backgroundColor: Colors.grey.shade200,
      //CORPO
      body: SingleChildScrollView(
        child: Padding(
          padding: EdgeInsets.all(20),
          child: Center(
            child: Form(
              key: formKey,

              child: Column(
                children: [
                  Icon(
                    Icons.calculate_rounded,
                    size: 120,
                    color: Colors.blue.shade700,
                  ),
                  campoTexto('Peso', txtPeso),
                  campoTexto('Altura', txtAltura),
                  botao('Calcular'),
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }

  //
// CAMPO DE TEXTO
//

campoTexto(rotulo, variavel) {
  return Container(
    margin: EdgeInsets.only(bottom: 15),
    child: TextFormField(
      controller: variavel,
      style: TextStyle(
        fontSize: 28,
      ),
      decoration: InputDecoration(
        labelText: rotulo,
        labelStyle: TextStyle(
          fontSize: 24,
          color: Colors.grey,
        ),

        border: OutlineInputBorder(
          borderRadius: BorderRadius.circular(20),
        ),
      ),

      //
      // VALIDAÇÃO
      //

      validator: (value) {
        // trocar a virgula por ponto
        value = value!.replaceFirst(',', '.');
        if (double.tryParse(value) == null) {
          //o usuário NÃo digitou um valr numérico
          return 'Entre com um valor numérico';
        } else {
          //Tudo CERTO, o valor digitado é numérico
          return null;
        }
      },
    )
  );
}
  //
  // BOTAO
  //

  botao(rotulo) {
    return Container(
      child: ElevatedButton(
        style: ElevatedButton.styleFrom(
          minimumSize: Size(300, 50),
          primary: Colors.red,
          
        ),
        
        child: Text(rotulo,
          style: TextStyle(
          fontSize: 24,
        )
        ),

        //COMPORTAMENTO
        onPressed: () {

          //DISPARAR O PROCESSO DE VALIDAÇÃO
          if (formKey.currentState!.validate()) {
            //Se o formulário foi VALIDADO

            //RECEBER OS VALORES INFORMADOS
            double p = double.parse(txtPeso.text);
            double a = double.parse(txtAltura.text);
            double imc = p / pow(a, 2);

            caixaDialogo("O valor do IMC é ${imc.toStringAsFixed(2)}");
          
          }
          
        },
      ),
    );
  }

  //
  // CAIXA DE DIÁLOGO
  //

  caixaDialogo(msg) {
    return showDialog(
      context: context, 
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Calculadora'),
          content: Text(
            msg,
            style: TextStyle(
              fontSize: 28,
            ),
          ),

          actions: [
            TextButton(
              onPressed: () {
                //fechar caixa de dialogo
                Navigator.of(context).pop();
                //limpar os campos de texto
                setState(() {
                  txtPeso.clear();
                  txtAltura.clear();
                });
              },

              child: Text('Fechar'),
            )
          ],
        );
      }
    );
  }

}