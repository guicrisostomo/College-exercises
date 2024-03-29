// File generated by FlutterFire CLI.
// ignore_for_file: lines_longer_than_80_chars, avoid_classes_with_only_static_members
import 'package:firebase_core/firebase_core.dart' show FirebaseOptions;
import 'package:flutter/foundation.dart'
    show defaultTargetPlatform, kIsWeb, TargetPlatform;

/// Default [FirebaseOptions] for use with your Firebase apps.
///
/// Example:
/// ```dart
/// import 'firebase_options.dart';
/// // ...
/// await Firebase.initializeApp(
///   options: DefaultFirebaseOptions.currentPlatform,
/// );
/// ```
class DefaultFirebaseOptions {
  static FirebaseOptions get currentPlatform {
    if (kIsWeb) {
      return web;
    }
    switch (defaultTargetPlatform) {
      case TargetPlatform.android:
        return android;
      case TargetPlatform.iOS:
        return ios;
      case TargetPlatform.macOS:
        throw UnsupportedError(
          'DefaultFirebaseOptions have not been configured for macos - '
          'you can reconfigure this by running the FlutterFire CLI again.',
        );
      case TargetPlatform.windows:
        throw UnsupportedError(
          'DefaultFirebaseOptions have not been configured for windows - '
          'you can reconfigure this by running the FlutterFire CLI again.',
        );
      case TargetPlatform.linux:
        throw UnsupportedError(
          'DefaultFirebaseOptions have not been configured for linux - '
          'you can reconfigure this by running the FlutterFire CLI again.',
        );
      default:
        throw UnsupportedError(
          'DefaultFirebaseOptions are not supported for this platform.',
        );
    }
  }

  static const FirebaseOptions web = FirebaseOptions(
    apiKey: 'AIzaSyBWwqHwzMmZhy_wDLFmV4LdP40-1OYu4LA',
    appId: '1:1063983514030:web:f7ff6db4eff5cc0ff8083f',
    messagingSenderId: '1063983514030',
    projectId: 'fatec-task-list-manha-5c846',
    authDomain: 'fatec-task-list-manha-5c846.firebaseapp.com',
    storageBucket: 'fatec-task-list-manha-5c846.appspot.com',
  );

  static const FirebaseOptions android = FirebaseOptions(
    apiKey: 'AIzaSyBEVElPB7JzCrEfFjiTBLYkvA5cdYqJtk8',
    appId: '1:1063983514030:android:242c0a7859f68731f8083f',
    messagingSenderId: '1063983514030',
    projectId: 'fatec-task-list-manha-5c846',
    storageBucket: 'fatec-task-list-manha-5c846.appspot.com',
  );

  static const FirebaseOptions ios = FirebaseOptions(
    apiKey: 'AIzaSyCBcSaBHJEkMceWHD3OlziKcL0RLKGcGQY',
    appId: '1:1063983514030:ios:02cf51dcc43771e4f8083f',
    messagingSenderId: '1063983514030',
    projectId: 'fatec-task-list-manha-5c846',
    storageBucket: 'fatec-task-list-manha-5c846.appspot.com',
    iosClientId: '1063983514030-ggmj4c58h5anl7inpgq2rbsjuh5p3h7e.apps.googleusercontent.com',
    iosBundleId: 'com.example.integrationFirebase',
  );
}
