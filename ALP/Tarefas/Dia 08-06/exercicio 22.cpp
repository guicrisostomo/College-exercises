/*
Fazer um algoritmo que calcule e escreva a seguinte soma:
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float resultado = 0, expoente = 0, denominador = 51;

  while (denominador > 1) {
    denominador--;
    expoente++;
    resultado += pow(2, expoente) / denominador;
  }

  cout << "O resultado é " << resultado << endl;

  return 0;
}