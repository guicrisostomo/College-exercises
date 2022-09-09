/*
Faça e um programa que, dados três números inteiros, os imprima em ordem crescente
*/
#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3, i;

  cout << "Informe três números" << endl;
  cin >> num1 >> num2 >> num3;

  cout << "A ordem crescente dos números inseridos é:" << endl;
  if (num1 > num2 && num1 > num3) {
    if (num2 > num3) {
      cout << num1 << "\n" << num2 << "\n" << num3 << endl;
    } else {
      cout << num1 << "\n" << num3 << "\n" << num2 << endl;
    }
  } else {
    if (num2 > num1 && num2 > num3) {
      if (num1 > num3) {
        cout << num2 << "\n" << num1 << "\n" << num3 << endl;
      } else {
        cout << num2 << "\n" << num1 << "\n" << num3 << endl;
      }
    } else {
      if (num3 > num1 && num3 > num2) {
        if (num1 > num2) {
          cout << num3 << "\n" << num1 << "\n" << num2 << endl;
        } else {
          cout << num3 << "\n" << num2 << "\n" << num1 << endl;
        }
      } else {
        cout << "erro" << endl;
      }
    }
  }
}