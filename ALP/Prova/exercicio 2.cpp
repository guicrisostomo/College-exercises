#include <iostream>

using namespace std;

int main() {
  int numInformado, numPrimo, numMultiplo3, i, modulo;

  numPrimo = numMultiplo3 = 0;

  cout << "Para encerrar o loop, por favor, digite '-1'" << endl;

  do {
    cout << "Digite um número: ";
    cin >> numInformado;

    if (numInformado == -1) {
      break;
    }

    modulo = numInformado % 3;

    if (modulo == 0) {
      numMultiplo3++;
    }
    
    if (numInformado == 1) {
      modulo = 0;
    }

    for (i = 2; modulo != 0; i++) {
      if (numInformado != i) {
        if (i == 3) {
          i++;
        }

        modulo = numInformado % i;
      } else {
        break;
      }
    }

    if (modulo != 0 || numInformado == 3) {
      cout << "O número " << numInformado << " é primo" << endl;
      numPrimo++;
    }
  } while (numInformado != -1);

  cout << "------------------------------------" << endl;
  cout << "Total de números primos: " << numPrimo << endl;
  cout << "Total de números múltiplos de 3: " << numMultiplo3 << endl;
  cout << "------------------------------------" << endl;
  
  return 0;
}