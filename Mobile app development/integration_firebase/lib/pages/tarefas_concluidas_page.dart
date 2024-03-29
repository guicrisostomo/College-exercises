// ignore_for_file: prefer_const_constructors, sized_box_for_whitespace

import 'package:flutter/material.dart';

import '../controller/tarefas_controller.dart';
import 'tarefas_exibir.dart';

class TarefasConcluidasPage extends StatefulWidget {
  const TarefasConcluidasPage({Key? key}) : super(key: key);

  @override
  State<TarefasConcluidasPage> createState() => _TarefasConcluidasPageState();
}

class _TarefasConcluidasPageState extends State<TarefasConcluidasPage> {
  var tarefas;

  @override
  void initState() {
    super.initState();
    tarefas = TarefasController().listar('2');
  }

  @override
  Widget build(BuildContext context) {
    return Container(
      color: Colors.blueGrey.shade50,
      child: Column(
        children: [
          TarefasExibir(
            tarefas,
            Colors.greenAccent.shade100,
            null,
            '2',
          ),
        ],
      ),
    );
  }
}