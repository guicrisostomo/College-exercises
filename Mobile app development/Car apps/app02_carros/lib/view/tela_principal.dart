import 'package:app02_carros/view/carro_widget.dart';
import 'package:flutter/material.dart';

class TelaPrincipal extends StatelessWidget {
  const TelaPrincipal({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('WebCars'),
        centerTitle: true,
        backgroundColor: Colors.blue.shade900,
      ),

      body: SingleChildScrollView(
        child: Column(
          children: [
            CarroWidget('Audi', 'Q8', 'audi_q8.jpg'),
            CarroWidget('Audi', 'R8', 'audi_r8.jpg'),
            CarroWidget('BMW', 'M2', 'bmw_m2.jpg'),
            CarroWidget('Ferrari', '488', 'ferrari_488.jpg'),
            CarroWidget('Lamborghini', 'Hurucan', 'lamborghini_huracan.jpg'),
            CarroWidget('Lamborghini', 'Urus', 'lamborghini_urus.jpg'),
            CarroWidget('Maserati', 'GTS', 'maserati_gts.jpg'),
          ],
        ),
      ),
    );
  }
}