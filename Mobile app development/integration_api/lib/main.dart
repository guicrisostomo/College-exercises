import 'package:flutter/material.dart';
import 'package:integration_api/view/tela_usuarios.dart';

void main() {
  runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Random User',
      home: TelaUsuario(),
    )
  );
}

//call aplication: flutter run -d chrome --web-renderer html