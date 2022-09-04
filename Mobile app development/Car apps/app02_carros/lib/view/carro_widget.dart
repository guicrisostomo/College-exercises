import 'package:flutter/material.dart';

class CarroWidget extends StatelessWidget {
  //Atributos da classe
  final String marca;
  final String modelo;
  final String foto;

  //Construtor
  const CarroWidget(
    this.marca, this.modelo, this.foto,
    {Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(

      //MARGENS
      //margin: EdgeInsets.fromLTRP(10, 20, 10, 10),
      margin: EdgeInsets.all(20),
      
      width: MediaQuery.of(context).size.width,
      height: 300,

      decoration: BoxDecoration(
        color: Colors.black26,
        border: Border.all(
          width: 5,
          color: Colors.black26,
        ),

        borderRadius: BorderRadius.circular(15),
      ),

      child: Column(children: [
        Text(
          marca,
          style: TextStyle(
            fontSize: 28,
            fontWeight: FontWeight.bold,
            //fontStyle: FontStyle.italic,
          ),
        ),
        Text(modelo),
        Image.asset(
          'lib/images/$foto',
          height: 220,
          fit: BoxFit.fill,
        ),
      ],),
    );
  }
}