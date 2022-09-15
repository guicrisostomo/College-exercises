import 'package:flutter/material.dart';
import 'package:ibge/view/tela_detalhes.dart';
import 'package:ibge/view/tela_principal.dart';

void main() {
  runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'IGBE',
      initialRoute: 't1',
      routes: {
        't1' :(context) => TelaPrincipal(),
        't2' :(context) => TelaDetalhes(),
      },
    )
  );
}