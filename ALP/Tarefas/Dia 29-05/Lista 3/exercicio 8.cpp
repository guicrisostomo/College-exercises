/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. 
*/
#include <iostream>

using namespace std;

int main() {
  float altura, pesoIdeal;
  string sexo;

  pesoIdeal = 0;

  cout << "Informe sua altura" << endl;
  cin >> altura;
  cout << "Informe seu sexo" << endl;
  cout << "Sendo 'M' para 'masculino' e 'F' para 'feminino'" << endl;
  cin >> sexo;

  if (sexo == "M" || sexo == "m") {
    pesoIdeal = 72.7 * altura - 58;
  } else {
    if (sexo == "F" || sexo == "f") {
      pesoIdeal = 62.1 * altura - 44.7;
    } else {
      cout << "Por favor, informe um sexo válido!" << endl;
      return 0;
    }
  }

  cout << "Seu peso ideal é " << pesoIdeal << " kg" << endl;
  return 0;
}