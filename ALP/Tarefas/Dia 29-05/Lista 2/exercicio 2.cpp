/*
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que o mesmo sofreu um aumento de 25%.
*/
#include <iostream>

using namespace std;
int main()
{
	float salario, novoSalario;

  cout << "Informe o salário do funcionário: ";
  cin >> salario;

  novoSalario = salario * 1.25;

  cout << "O novo salário do funcionário será de R$ " << novoSalario;

  return 0;
}