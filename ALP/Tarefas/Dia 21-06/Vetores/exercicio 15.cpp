// RA: 2840482111014
// Nome: Guilherme Crisostomo da Silva

/*
Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementosrepetidos.
*/

#include <iostream>
#define N 6

using namespace std;

int main() {
  int vetor[N], vetorSemRepet[N] = {0}, i, j, aux;

  for (i = 0; i < N; i++) {
    cout << "Digite um número: ";
    cin >> vetor[i];
  }

  cout << "-------------------------------------------------------------" << endl << "|" << "\t";
  for (i = 0; i < N; i++) {
    for (aux = 0; aux < N; aux++) {
      if (i != aux) {
        for (j = 0; j < N; j++) {
          if (vetorSemRepet[j] == 0) {
            vetorSemRepet[j] = vetor[i];
            cout << vetorSemRepet[j] << "\t" << "|" << "\t";
            break;
          } else {
            if (vetorSemRepet[j] == vetor[i]) {
              break;
            }
          }
        }
      }
    }
  }
  cout << endl << "-------------------------------------------------------------" << endl;

  return 0;
}