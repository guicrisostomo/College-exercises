/*
Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. Fazer um algoritmo que calcule e escreva:
•a maior e a menor altura do grupo;
•a média de altura das mulheres;
•o número de homens;
*/
#include <iostream>

using namespace std;

int main() {
  float faren, i;
  cout << "C (Celsius)";
  cout << "\tF (Fahrenheit)" << endl;
  for (i = 50; i < 151; i++) {
    faren = ((i * 9) + 160) / 5;
    
    cout << i << "\t" << faren << endl;
  }

  return 0;
}