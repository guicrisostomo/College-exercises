/*
Faça um programa que receba o salário base de um funcionário,calcule e mostre o salário à receber, 
sabendo-se que o mesmo possui uma gratificação de 5,5% sobre o salário base e paga 7% de IR sobre o salário base.
*/
#include <iostream>

using namespace std;

int main() {
  float salario, novoSalario, gratificacao, imposto;

  novoSalario = 0;

  cout << "Informe o salário do funcionário" << endl;
  cin >> salario;

  gratificacao = salario * 0.055;
  imposto = salario * 0.07;

  novoSalario = salario + gratificacao - imposto;

  cout << "O novo salário será de R$ " << novoSalario << endl;
  
  return 0;
}