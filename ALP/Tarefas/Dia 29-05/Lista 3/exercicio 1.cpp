/*
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética,
por fim escreva se ele foi aprovado ou reprovado, considerando que para ser aprovado a média deverá ser maior ou igual à 7,0.
*/
#include <iostream>

using namespace std;

int main() {
  float nota1, nota2, nota3, nota4, media;

  cout << "Informe a primeira nota: ";
  cin >> nota1;
  cout << "Informe a segunda nota: ";
  cin >> nota2;
  cout << "Informe a terceira nota: ";
  cin >> nota3;
  cout << "Informe a quarta nota: ";
  cin >> nota4;

  media = (nota1 + nota2 + nota3 + nota4) / 4;

  if (media >= 7)
    cout << "O aluno ficou com " << media << " de média. Ele foi aprovado" << endl;
  else
    cout << "O aluno ficou com " << media << " de média. Ele foi reprovado" << endl;
}