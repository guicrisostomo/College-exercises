// RA: 2840482111014
// Nome: Guilherme Crisostomo da Silva

/*
Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/

#include <iostream>
#define N 10

using namespace std;

int main() {
  int vetor[N], contagemNumPar = 0, i;

  for (i = 0; i < N; i++) {
    cout << "Escreva um número: ";
    cin >> vetor[i];

    if (vetor[i] % 2 == 0 && vetor[i] != 1 && vetor[i] != -1) {
      contagemNumPar++;
    }
  }

  cout << "-------------------------------------------" << endl;
  cout << "O vetor possui " << contagemNumPar << " números pares" << endl;
  cout << "-------------------------------------------" << endl;

  return 0;
}