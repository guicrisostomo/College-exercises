import 'package:flutter/material.dart';

import '../model/pais.dart';

class TelaDetalhes extends StatefulWidget {
  const TelaDetalhes({Key? key}) : super(key: key);

  @override
  State<TelaDetalhes> createState() => _TelaDetalhesState();
}

class _TelaDetalhesState extends State<TelaDetalhes> {
  @override
  Widget build(BuildContext context) {

    //RECUPERAR o Pais PASSADO COMO PARÂMETRO
    var p = ModalRoute.of(context)!.settings.arguments as Pais;

    return Scaffold(
      appBar: AppBar(
        title: Text('IBGE'),
        centerTitle: true,
        backgroundColor: Color.fromARGB(221, 78, 128, 14),
      ),
      backgroundColor: Colors.white,
      body: Padding(
        padding: EdgeInsets.all(30),
        child: ListView(
          children: [
            Image.network(
              'https://countryflagsapi.com/png/${p.abreviatura.toLowerCase()}',
            ),
            Text(p.nome),
            Text(p.historico)
          ],
        )
      ),

      //
      //FLOATING ACTION BUTTON
      //

      floatingActionButton: FloatingActionButton(
        child: Icon(Icons.favorite),
        backgroundColor: Color.fromARGB(255, 245, 15, 8),
        onPressed: () {
          ScaffoldMessenger.of(context).showSnackBar(
            SnackBar(
              duration: Duration(seconds: 3),
              content: Text('${p.nome} adicionado aos favoritos')
            )
          );
        },
      ),
    );
  }
}