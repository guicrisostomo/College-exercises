/*
Faça um programa que leia 2 números representando os lados de um retângulo,
calcule e imprima 0 se tais lados formares um quadrado, caso contrário imprima qualquer outro valor.
*/

#include <iostream>

using namespace std;

int main()
{
	float lado1, lado2;

	cout << "Digite os dois lados do retangulo: " << endl;
	cin >> lado1 >> lado2;

	cout << !(lado1 == lado2) << endl;

	return 0;
}