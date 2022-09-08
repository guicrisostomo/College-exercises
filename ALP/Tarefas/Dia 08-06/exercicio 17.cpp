/*
Um companhia de teatro planeja dar uma série de espetáculos. A direção calcula que, a R$ 5,00 o ingresso, serão vendidos 120 ingressos, e as despesas montarão em R$ 200,00. 
A diminuição de R$ 0,50 no preço dos ingressos espera-se que haja um aumento de 26 ingressos vendidos. 
Fazer um algoritmo que escreva uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-se varias este preço de R$ 5,00 a R$ 1,00 de R$ 0,50 em R$ 0,50. 
Escreva, ainda, o lucro máximo esperado, o preço e o número de ingressos correspondentes
*/
#include <iostream>

using namespace std;

int main() {
  float valor = 5.5, lucroMax = 0, precoMax = 0, lucro = 0;
  int ingressMax = 0, ingressos = 94;

  cout << "----------------------------" << endl;
  cout << "Lucro\tPreço ingresso" << endl;

  for ( ; valor > 1; valor -= 0.5) {
    ingressos += 26;

    lucro = (valor * ingressos) - 200;

    cout << lucro << "\t\t" << valor << endl;

    if (lucro > lucroMax) {
      lucroMax = lucro;
      precoMax = valor;
      ingressMax = ingressos;
    }
  }

  cout << "----------------------------" << endl;
  cout << "Lucro máximo esperado: " << lucroMax << endl;
  cout << "Preço do ingresso: " << precoMax << endl;
  cout << "Número de ingressos: " << ingressMax << endl;
  cout << "----------------------------" << endl;

  return 0;
}