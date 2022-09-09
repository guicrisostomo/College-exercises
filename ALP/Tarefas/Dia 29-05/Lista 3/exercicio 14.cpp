/*
Dada a função 𝑓 definida por:
Fazer um programa para calcular a função acima a partir do valor de x fornecido pelo usuário.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int x, valor;

  valor = 0;

  cout << "Qual é o valor de x ?" << endl;
  cin >> x;

  if (x < 1) {
    valor = 4 - pow(x, 2);

    cout << "A função é 4 - x² e seu resultado é " << valor << endl;
  } else {
    if (x == 1) {
      valor = 2;

      cout << "A função é 2 e seu resultado é " << valor << endl;
    } else {
      valor = pow(x, 2) + 2;

      cout << "A função é 2 + x² e seu resultado é " << valor << endl;
    }
  }

  return 0;
}