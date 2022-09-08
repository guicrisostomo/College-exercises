/*
Fazer um algoritmo que calcule e escreva o valor de S:
*/
#include <iostream>

using namespace std;

int main() {
  float numerador = -1, denominador = 0, resultado = 0;

  while (denominador < 50) {
    denominador++;
    numerador += 2;
    resultado += numerador / denominador;
  }

  cout << "O resultado é " << resultado << endl;

  return 0;
}