// RA: 2840482111014
// Nome: Guilherme Crisostomo da Silva

/*
Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e osescreva na tela.
*/

#include <iostream>
#define N 10
#define M N / 2

using namespace std;

int main() {
  int vetor[N], vetorValIgual[M] = {0}, i, aux, j;

  for (i = 0; i < N; i++) {
    cout << "Digite um número: ";
    cin >> vetor[i];
  }

  cout << "--------------------------------" << endl;
  cout << "Números iguais:" << endl << "|" << "\t";
  for (i = 0; i < N; i++) {
    for (aux = 0; aux < N; aux++) {
      if (i != aux) {
        if (vetor[i] == vetor[aux]) {
          for (j = 0; j < M; j++) {
            if (vetorValIgual[j] == 0) {
              vetorValIgual[j] = vetor[i];
              cout << vetorValIgual[j] << "\t" << "|" << "\t";
              break;
            } else {
              if (vetorValIgual[j] == vetor[i]) {
                break;
              }
            }
          }
        }
      }
    }
  }

  cout << endl << "--------------------------------" << endl;

  return 0;
}