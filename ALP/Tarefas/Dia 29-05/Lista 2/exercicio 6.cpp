/*
Faça um programa que leia o ano de nascimento de uma pessoa e o ano atual,
 calcule e mostre:
 a)A idade da pessoa;
 b)A idade da mesma em 2050
*/
#include <iostream>

using namespace std;

int main() {
  int anoNasci, anoAtual, idadeAtual, idade2050;

  cout << "Qual é seu ano de nascimento ?" << endl;
  cin >> anoNasci;

  cout << "Qual é o ano atual ?" << endl;
  cin >> anoAtual;

  idadeAtual = anoAtual - anoNasci;
  idade2050 = 2050 - anoNasci;

  cout << "Sua idade é : " << idadeAtual << " anos" << endl;
  cout << "Sua idade em 2050: " << idade2050 << " anos" << endl;

  return 0;
}