/*
Sabe-se que:
•1 pé = 12 polegadas
•1 jarda = 3 pés
•1 milha = 1760 jardas
Faça um programa que receba uma medida em pés e converta para jardas e milhas.
*/
#include <iostream>

using namespace std;

int main() {
  double pes, jardas, milhas;
  cout << "Informe uma medida (em pés): ";
  cin >> pes;

  jardas = pes / 3;
  milhas = jardas / 1760;

  cout << pes << " pés é igual à " << jardas << " jardas que é igual à " << milhas << " milhas" << endl;

  return 0;
}