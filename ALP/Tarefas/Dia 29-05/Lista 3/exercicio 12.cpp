/*
Problemas simples do cotidiano podem representar desafios para o mundo computacional. Faça um programa que, dados três números inteiros representando dia, mês e ano de uma data, imprima qual o dia seguinte.
*/
#include <iostream>

using namespace std;

int main() {
  int dia, mes, ano;

  cout << "Informe o dia, mês e ano, respectivamente, usando números inteiros" << endl;
  cin >> dia >> mes >> ano;

  if ((dia == 31) & (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) {
    if (mes == 12) {
      dia = 1;
      mes = 1;
      ano += 1;
    } else {
      dia = 1;
      mes += 1;
    }
  } else {
    if ((dia == 30) & (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
      dia = 1;
      mes += 1;
    } else {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
      if (dia == 29 && mes == 2) {
        dia = 1;
        mes = 3;
      } else {
        dia += 1;
      }
    } else {
      if (dia == 28 && mes == 2) {
        dia = 1;
        mes = 3;
      } else {
        dia += 1;
      }
    }
   }
  }

  cout << "O dia seguite será " << dia << "/" << mes << "/" << ano;
}