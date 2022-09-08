/*
Fazer um algoritmo que:
•Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
•A última linha que não entrará nos cálculos, contém o valor da idade igual a zero.
•Calcule e escreva a idade média deste grupo de indivíduos.
*/
#include <iostream>

using namespace std;

int main() {
  float idade, soma, i, media;

  soma = i = 0;
  idade = 1;

  cout << "Para encerrar o programa, digite '0'" << endl;

  for ( ; idade != 0; ++i) {
    cout << "Informe a idade do indivíduo: " << endl;
    cin >> idade;
    soma += idade;
  }

  i--;

  media = (soma / i);
  cout << "A idade média é " << media << endl;

  return 0;
}