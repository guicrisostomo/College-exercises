import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:integration_firebase/pages/login_page.dart';
import 'package:integration_firebase/pages/criar_conta_page.dart';
import 'package:integration_firebase/pages/principal_page.dart';

import 'firebase_options.dart';

Future<void> main() async {
  
  //
  //INICIALIZAÇÃO DO FIREBASE
  //

  await Firebase.initializeApp(
    options: DefaultFirebaseOptions.currentPlatform,
  );
  
  runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'TASK LIST',

      initialRoute: 'login',
      routes: {
        'login' : (((context) => const LoginPage())),
        'criar_conta': ((context) => const CriarContaPage()),
        'principal': ((context) => const TelaPrincipal()),
      },
    ),
  );
}