/*
O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é 
IMC=peso/altura². Elabore um programa que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo.
*/
#include <iostream>

using namespace std;

int main() {
  float peso, altura, imc;

  imc = 0;

  cout << "Informe seu peso" << endl;
  cin >> peso;
  cout << "Informe sua altura" << endl;
  cin >> altura;

  imc = (peso) / (altura * altura);

  cout << "Seu Indice de Massa Corporal (IMC) é de " << imc << endl;
  
  return 0;
}