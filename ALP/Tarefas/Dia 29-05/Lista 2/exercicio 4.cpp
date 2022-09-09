/*
Faça um programa que calcule a área de um circulo a partir de seu raio sabendo que: Area=πR2
*/
#include <iostream>

using namespace std;

int main() {
  float raio, area, pi;

  cout << "Informe o raio do circulo: ";
  cin >> raio;
  pi = 3.14159;
  area = (raio * raio) * pi;

  cout << "A área do circulo é " << area << endl;

  return 0;
}