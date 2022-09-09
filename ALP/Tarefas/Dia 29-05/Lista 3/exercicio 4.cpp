/*
Faça um programa que receba dois número e mostre o maior
*/
#include <iostream>

using namespace std;

int main() {
  float num1, num2;

  cout << "Informe dois números" << endl;
  cin >> num1 >> num2;

  if (num1 > num2)
    cout << "O maior número é " << num1 << endl;
  else
    cout << "O maior número é " << num2 << endl;
}