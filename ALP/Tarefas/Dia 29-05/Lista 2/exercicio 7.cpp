/*
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário bruto e à receber de acordo com as regras:
a)A hora trabalhada vale 20% do salário mínimo
b)O salário bruto é o valor da hora trabalhada multiplicado pelo número de horas trabalhadas
c)O imposto equivale à 3% do salário bruto
d)O salário à receber é o salário bruto descontado o imposto.
*/
#include <iostream>

using namespace std;

int main()
{
	float horas_trab, sal_min, sal_bruto, imposto, sal_receber;

	cout << "Horas trabalhadas: ";
	cin >> horas_trab;
	cout << "Sálario Mínimo: ";
	cin >> sal_min;

	sal_bruto = horas_trab * (sal_min * 0.2);
	imposto = sal_bruto * 0.03;
	sal_receber = sal_bruto - imposto;

	cout << "------------- Holerite -------------" << endl;
	cout << "Salário Bruto: R$ " << sal_bruto << endl;
	cout << "Imposto......: R$ " << imposto << endl;
	cout << "Salário a Receber: R$ " << sal_receber << endl;
	cout << "------------------------------------" << endl;

	return 0;
}