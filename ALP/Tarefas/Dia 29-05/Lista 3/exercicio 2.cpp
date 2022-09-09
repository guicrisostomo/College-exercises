/*
Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem de acordo com a tabela abaixo:
*/
#include <iostream>

using namespace std;

int main() {
  float nota1, nota2, media;

  cout << "Informe a primeira nota: ";
  cin >> nota1;
  cout << "Informe a segunda nota: ";
  cin >> nota2;

  media = (nota1 + nota2) / 2;

  if (media >= 0 && media < 3)
    cout << "A média aritmética é " << media << ". Foi reprovado" << endl;
  else
    if (media >= 3 && media < 7)
      cout << "A média aritmética é " << media << ". Deverá fazer exame" << endl;
    else
      cout << "A média aritmética é " << media << ". Foi aprovado" << endl;
}