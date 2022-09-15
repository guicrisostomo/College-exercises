// ignore_for_file: prefer_const_constructors

import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:ibge/model/pais.dart';

class TelaPrincipal extends StatefulWidget {
  const TelaPrincipal({Key? key}) : super(key: key);

  @override
  State<TelaPrincipal> createState() => _TelaPrincipalState();
}

class _TelaPrincipalState extends State<TelaPrincipal> {

  //LISTA DINÂMICA DE OBJETOS da classe Pais
  List<Pais> lista = [];

  //CARREGAR OS DADOS DO ARQUIVO JSON
  carregarDados() async {
    final String a = await rootBundle.loadString(
      'lib/data/paises.json',
    );

    final dynamic d = await json.decode(a);
    setState(() {
      d.forEach((item) {
        lista.add(Pais.fromJson(item));
      });
    });
  }

  @override
  void initState() {
    super.initState();
    WidgetsBinding.instance.addPostFrameCallback((_) async {
      await carregarDados();
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('IBGE'),
        centerTitle: true,
        backgroundColor: Color.fromARGB(221, 78, 128, 14),
      ),
      backgroundColor: Colors.white,
      body: Padding(
        padding: EdgeInsets.all(30),
        //
        //LISTVIEW
        //

        child: ListView.builder(
          itemCount: lista.length,
          itemBuilder: (context, index) {
          return Card(
            color: Color.fromARGB(255, 245, 15, 8),
            child: ListTile(

              leading: Icon(Icons.public, size: 20, color: Colors.white),

              title: Text(
                lista[index].nome, 
                style: TextStyle(
                  fontSize: 28,
                  color: Colors.white,
                ),
              ),

              subtitle: Text(
                'Capital: ${lista[index].capital}',
                style: TextStyle(
                  color: Colors.white,
                ),
              ),

              trailing: Icon(Icons.arrow_right, size: 20, color: Colors.white),
              //EVENTO DE CLIQUE
              onTap: () {
                Navigator.pushNamed(
                  context,
                  't2',

                  //Passagem de parâmetro
                  arguments: lista[index]
                );
              },
            ),
          );
        })
      ),
    );
  }
}