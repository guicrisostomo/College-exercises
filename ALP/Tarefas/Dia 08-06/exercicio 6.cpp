/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama. 
Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.
*/
#include <iostream>

using namespace std;

int main() {
  float massaI, massaF;
  int hora, min, seg;

  hora = min = seg = 0;

  cout << "Informe a massa inicial: ";
  cin >> massaI;
  
  massaF = massaI;

  for ( ; massaF >= 0.5; seg += 50) {
    massaF /= 2;
  }

  min = seg / 60;
  hora = min / 60;
  seg %= 60;

  cout << "------------------------" << endl;
  cout << "Massa inicial: " << massaI << endl;
  cout << "Massa final: " << massaF << endl;
  cout << "Tempo: " << hora << ":" << min << ":" << seg << endl;
  cout << "------------------------" << endl;
  
  return 0;
}