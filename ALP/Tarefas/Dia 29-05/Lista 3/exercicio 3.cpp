/*Faça um programa que receba dois números e mostre o menor.*/
#include <iostream>

using namespace std;

int main() {
  float num1, num2;

  cout << "Informe dois números:" << endl;
  cin >> num1 >> num2;

  if (num1 < num2)
    cout << "O número menor é " << num1 << endl;
  else
    cout << "O número menor é " << num2 << endl;

  return 0;
}