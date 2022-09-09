/*
Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, caso contrário multiplique A por B. 
Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela. 
*/
#include <iostream>

using namespace std;

int main() {
  float numA, numB, numC;

  cout << "Informe dois valores:" << endl;
  cin >> numA >> numB;

  if (numA == numB) {
    numC = numA + numB;
    cout << numA << " + " << numB << " = " << numC << endl;
  } else {
    numC = numA * numB;
    cout << numA << " X " << numB << " = " << numC << endl;
  }
  return 0;
}