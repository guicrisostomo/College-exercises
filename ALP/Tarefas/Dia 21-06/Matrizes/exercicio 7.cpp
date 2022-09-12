// RA: 2840482111014
// Nome: Guilherme Crisostomo da Silva

/*
Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int matriz[10][10], i, j;

  cout << "Matriz" << endl;
  cout << "-------------------------------------------------------------------------";
  for (i = 0; i < 10; i++) {
    cout << endl << "|\t";
    for (j = 0; j < 10; j++) {
      if (i < j) {
        matriz[i][j] = (2 * i) + (7 * j) - 2;
      } else {
        if (i > j) {
          matriz[i][j] = (4 * pow(i, 3)) - (5 * pow(j, 2)) + 1;
        } else {
          matriz[i][j] = (3 * pow(i, 2)) - 1;
        }
      }
      
      cout << matriz[i][j] << "\t|\t";
    }
  }

  cout << endl << "-------------------------------------------------------------------------" << endl;
}