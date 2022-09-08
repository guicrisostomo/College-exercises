/*
Supondo que a população de um país A seja da ordem de 9.000.000 de habitantes com uma taxa anual de crescimento de 3% e que a população de um país B seja, aproximadamente, 
de 20.000.000 de habitantes com uma taxa anual de crescimento de 1,5%, fazer um algoritmo que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a 
população do país B, mantidas essas taxas de crescimento.
*/
#include <iostream>

using namespace std;

int main() {
  int anos;
  float paisA, paisB;

  paisA = 9000000;
  paisB = 20000000;

  for (anos = 0; paisA <= paisB; anos++) {
    paisA *= 1.03;
    paisB *= 1.015;
  }
  
  cout << "Será necessário " << anos << " anos para o país A ultrapassar ou se igualar a população do país B" << endl;
  
  return 0;
}