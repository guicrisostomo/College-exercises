/*
Tem-se uma estrada ligando várias cidades. Cada cidade tem seu marco quilométrico. Fazer um algoritmo que:
•leia vários pares de dados, contendo cada par os valores dos marcos quilométricos, em ordem crescente, de duas cidades. O último par contém estes dois valores iguais;
•calcule os tempos decorridos para percorrer a distância entre estas duas cidades, com as seguintes velocidades: 20, 30, 40, 50, 60, 70, 80 km/hora, sabendo-se que  ,onde t=tempo; e=espaço; v=velocidade; •escreva os marcos quilométricos, a velocidade e o tempo decorrido entre as duas cidades, apenas quando este tempo for superior a 2 horas.
*/
#include <iostream>

using namespace std;

int main() {
  float quilom1, quilom2, tempo, velocidade, diferencaQuilo;

  do {
    cout << "Marco quilométrico da cidade 1: ";
    cin >> quilom1;
    cout << "Marco quilométrico da cidade 2: ";
    cin >> quilom2;

    if (quilom1 == quilom2) {
      break;
    }

    diferencaQuilo = quilom1 - quilom2;

    for (velocidade = 20; velocidade < 90; velocidade += 10) {
      tempo = diferencaQuilo / velocidade;

      if (tempo > 2) {
        cout << "--------------------------------------" << endl;
        cout << "Marco quilométrico da cidade 1: " << quilom1 << " km" << endl;
        cout << "Marco quilométrico da cidade 2: " << quilom2 << " km" << endl;
        cout << "Velocidade: " << velocidade << " km/h" << endl;
        cout << "Tempo: " << tempo << " horas" << endl;
        cout << "--------------------------------------" << endl;
      }
    }

  } while (quilom1 != quilom2);

  return 0;
}