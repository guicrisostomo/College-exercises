/*
Faça um algoritmo que, dado o valor total em reais e o número de prestações desejadas, calcule o valor de cada prestação. O número mínimo de prestações deve ser 12. Se o número de prestações 
for maior ou igual a 24, adicione 10% de juros ao valor total, se for maior ou igual a 36, adicione 15% de juros ao valor total.
*/
#include <iostream>

using namespace std;

int main() {
  float valor, valorTotal;
  int prestacao, i;

  cout << "Informe o valor total em reais" << endl;
  cin >> valor;

  cout << "Informe o número de prestações" << endl;
  cin >> prestacao;

  if (prestacao < 12) {
    while (prestacao < 12) {
      cout << "Por favor, informe, no minimo, 12 prestações" << endl;
      cout << "Informe o número de prestações" << endl;
      cin >> prestacao;
    }
  }

  valorTotal = valor;

  if (prestacao >= 24 && prestacao < 36) {
    valorTotal = valor * 1.1;
  } else {
    if (prestacao >= 36) {
      valorTotal = valor * 1.15;
    }
  }

  cout << "Valor total: R$ " << valorTotal << endl;
  cout << "Valor de cada prestação: R$ " << (valorTotal / prestacao) << endl;
}