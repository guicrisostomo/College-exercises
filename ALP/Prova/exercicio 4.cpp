#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double resultado, numerador, denominador;
  int numeradorExpoen, denominadorFatorial, i;

  denominadorFatorial = 1;
  resultado = numeradorExpoen = 0;

  while (numeradorExpoen < 499) {
    numerador = pow(2, numeradorExpoen);
    
    for (denominador = 1, i = denominadorFatorial; i >= 2; i--) {
      denominador *= i;
    }

    resultado += numerador / denominador;
    
    numeradorExpoen++;
    denominadorFatorial++;
  }

  cout << "O valor de S é " << resultado << endl;

  return 0;
}