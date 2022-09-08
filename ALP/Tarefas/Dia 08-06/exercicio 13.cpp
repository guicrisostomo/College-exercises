/*
13)Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em uma determinada cidade. Para isso, são fornecidos os seguintes dados:
1)preço do kWh consumido;
2)número do consumidor;
3)quantidade de kWh consumidos durante o mês;
4)código do tipo de consumidor (residencial, comercial, industrial).O número do consumidor igual a zero deve ser usado como flag. Fazer um algoritmo que:
•leia os dados descritos acima:
•calcule:
a)para cada consumidor, o total a pagar;
b)o maior consumo verificado;
c)o menor consumo verificado;
d)o total do consumo para cada um dos três tipos de consumidores; 
e)a média geral de consumo;
•escreva:
a)para cada consumidor, o seu número e o total a pagar;
b)o que foi calculado nos itens b, c, d, e acima especificados.
*/
#include <iostream>

using namespace std;

int main() {
  float preco, numConsu, quantidade, tipoConsu, total = 0, maiorConsumo = 0, menorConsumo = -1, totalResidencial = 0, totalComercial = 0, totalIndustrial = 0, mediaConsumo = 0;

  do {
    cout << "Número do consumidor: ";
    cin >> numConsu;

    if (numConsu == 0) {
      break;
    }

    cout << "Quantidade de kWh consumido: ";
    cin >> quantidade;
    cout << "Preço do kWh: ";
    cin >> preco;
    cout << "Tipo do consumidor" << endl;
    cout << "Sendo 'R' para residencial, 'C' para comercial e 'I' para industrial" << endl;
    cin >> tipoConsu;

    total = preco * quantidade;

    while (tipoConsu != 'R' && tipoConsu != 'r' && tipoConsu != 'C' && tipoConsu != 'c' && tipoConsu != 'I' && tipoConsu != 'i') {
      cout << "Tipo de consumidor inválido!" << endl;
      cout << "Informe o tipo do consumidor, sendo 'R' para residencial, 'C' para comercial e 'I' para industrial" << endl;
      cin >> tipoConsu;
    }
    if (tipoConsu == 'R' || tipoConsu == 'r') {
      totalResidencial += total;
    } else {
        if (tipoConsu == 'C' || tipoConsu == 'c') {
          totalComercial += total;
    } else {
        if (tipoConsu == 'I' || tipoConsu == 'i') {
          totalIndustrial += total;
        }
      }
    }

    if (quantidade > maiorConsumo) {
      maiorConsumo = quantidade;
    }
    if (menorConsumo == -1) {
      menorConsumo = quantidade;
    } else {
      if (quantidade < menorConsumo) {
        menorConsumo = quantidade;
      }
    }

    mediaConsumo++;

    cout << "----------------------------" << endl;
    cout << "Número do consumidor: " << numConsu << endl;
    cout << "\tTotal a pagar: " << total << endl;
    cout << "----------------------------" << endl;

  } while(numConsu != 0);

  mediaConsumo = (totalComercial + totalIndustrial + totalResidencial) / mediaConsumo;

  cout << "----------------------------" << endl;
  cout << "Maior consumidor: " << numConsu << endl;
  cout << "Menor consumidor: " << total << endl;
  cout << "Média geral consumidor: " << mediaConsumo << endl;
  cout << "----------------------------" << endl;
  cout << "Total de consumo: " << endl;
  cout << "\tTipo do consumidor residencial: R$ " << totalResidencial << endl;
  cout << "\tTipo do consumidor industrial: R$ " << totalIndustrial << endl;
  cout << "\tTipo do consumidor comercial: R$ " << totalComercial << endl;
  cout << "----------------------------" << endl;

  return 0;
}