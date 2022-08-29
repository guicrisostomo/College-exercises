// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';

void main() {
  // método responsável pela execução do app
  runApp(
    //padrão de design Material
    MaterialApp(
      title: 'Hello World',
      //definir a primeira tela que será exibida
      home: TelaPrincipal(),
    ),

    
  );
}

//
//  TELA PRINCIPAL
//

class TelaPrincipal extends StatelessWidget {
  const TelaPrincipal({Key? key}) : super(key: key);

  //método responsável por construir e apresentar
  //os elementos visuais (widgets) do app
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Título'),
        centerTitle: true,
        backgroundColor: Colors.deepPurple.shade600,
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          Text('Hello World!'),

          Row(
            // ignore: sort_child_properties_last
            children: [
              Container(
                width: 50,
                height: 50,
                color: Colors.red,
              ),
              Container(
                width: 50,
                height: 50,
                color: Colors.green,
              ),
              Container(
                width: 50,
                height: 50,
                color: Colors.blue,
              ),
            ],

            mainAxisAlignment: MainAxisAlignment.center,
          ),

          Text('Hello World!'),
          Text('Hello World!'),
          Text('Hello World!'),
        ],
      ),
      bottomNavigationBar: BottomNavigationBar(
        items: const <BottomNavigationBarItem>[
          BottomNavigationBarItem(
            icon: Icon(Icons.home),
            label: 'Home',
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.business),
            label: 'Business',
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.school),
            label: 'School',
          ),
        ],
      ),
    );
  }
}
