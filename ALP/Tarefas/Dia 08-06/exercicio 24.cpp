/*
Fazer um algoritmo que calcule e escreva o valor de S onde:
S=1/1−2/4+3/9−4/16+5/25−6/36+⋯−10/100
*/
#include <iostream>

using namespace std;

int main() {
  float numerador = 0, denominador = 0, resultado = 0;
  int operacao = 0;

  while (numerador < 10) {
    numerador++;
    denominador = numerador * numerador;

    if (operacao == 0) {
      operacao = 1;
      resultado += (numerador / denominador);
    } else {
      operacao = 0;
      resultado -= (numerador / denominador);
    }
  }

  cout << "O valor de S é " << resultado << endl;

  return 0;
}