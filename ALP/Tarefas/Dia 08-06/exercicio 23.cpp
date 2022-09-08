/*
Fazer um algoritmo para calcular e escrever a seguinte soma:

*/
#include <iostream>

using namespace std;

int main() {
  float num1 = 38, num2 = 39, denominador = 0, resultado = 0;

  while (num1 > 1) {
    denominador++;
    num1--;
    num2--;

    resultado += (num1 * num2) / denominador;
  }

  cout << "O resultado de S é " << resultado << endl;

  return 0;
}