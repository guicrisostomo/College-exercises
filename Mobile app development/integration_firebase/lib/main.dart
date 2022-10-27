import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';

import 'firebase_options.dart';

Future<void> main() async {
  
  //
  //INICIALIZAÇÃO DO FIREBASE
  //

  await Firebase.initializeApp(
    options: DefaultFirebaseOptions.currentPlatform,
  );
  
  runApp(
    const MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'TASK LIST',
    ),
  );
}