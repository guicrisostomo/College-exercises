
/*
Faça um programa que receba três números e seus respectivos pesos, calcule e mostre a média ponderada.
*/
#include <iostream>

using namespace std;

int main()
{
	float num1, peso1, num2, peso2, num3, peso3, mediap;

	cout << "Informe o primeiro numero: ";
	cin >> num1;
	cout << "Informe o peso do primeiro numero: ";
	cin >> peso1;

	cout << "Informe o segundo numero: ";
	cin >> num2;
	cout << "Informe o peso do segundo numero: ";
	cin >> peso2;

	cout << "Informe o terceiro numero: ";
	cin >> num3;
	cout << "Informe o peso do terceiro numero: ";
	cin >> peso3;

	mediap = (num1 * peso1 + num2 * peso2 + num3 * peso3) / (peso1 + peso2 + peso3);

	cout << "A media ponderada eh " << mediap << endl;

	return 0;
}