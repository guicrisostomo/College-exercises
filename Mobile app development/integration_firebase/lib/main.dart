import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:integration_firebase/pages/login_page.dart';

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
      },
    ),
  );
}