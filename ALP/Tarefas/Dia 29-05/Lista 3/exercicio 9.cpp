/**
Elabore um programa que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.Código Condição de pagamento:
a)À vista em dinheiro ou cheque, recebe 10% de desconto
b)À vista no cartão de crédito, recebe 15% de desconto
c)Em duas vezes, preço normal de etiqueta sem juros
d)Em três vezes, preço normal de etiqueta mais juros de 10%
**/

#include <iostream>

using namespace std;

int main()
{
	float preco_normal, preco_final, juros, desconto;
	int cond_pagto, parcelas;

	cout << "------------- CAIXA ------------" << endl;
	cout << "Valor do Produto: ";
	cin >> preco_normal;
	cout << "------ FORMA DE PAGAMENTO ------" << endl;
	cout << "\t(1) - A vista" << endl;
	cout << "\t(2) - A vista no crédito" << endl;
	cout << "\t(3) - 2 parcelas sem juros" << endl;
	cout << "\t(4) - 3 parcelas" << endl;
	cout << "\t\tEscolha uma opcao: ";
	cin >> cond_pagto;

	parcelas = juros = desconto = 0;
	switch (cond_pagto) {
		case 1:
				desconto = 0.1;
				break;
		case 2:
				desconto = 0.15;
				break;
		case 3:
				parcelas = 2;
				break;
		case 4:
				juros = 0.1;
				parcelas = 3;
				break;
		default:
				cout << "Opcao invalida, compra cancelada!!" << endl;
	}

	preco_final = preco_normal - (preco_normal * desconto) + (preco_normal * juros);

	cout << "------------ NOTA -----------" << endl;
	cout << "\tPreco R$ " << preco_normal << endl;
	if (desconto > 0)
		cout << "\tDesconto " << desconto*100 << "%" << endl;
	if (juros > 0)
		cout << "Juros " << juros*100 << "%" << endl;
	if (parcelas > 0) {
		cout << "\tParcelas: " << parcelas;
		cout << " no valor: R$ " << preco_final / parcelas << endl;
	}
	cout << "\tTotal: R$ " << preco_final << endl;
	cout << "-----------------------------" << endl;
}