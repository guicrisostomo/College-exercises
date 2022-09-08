/*
A comissão organizadora de um rallye automobilístico decidiu apurar os resultados da competição através de um processamento eletrônico. 
Um dos algoritmos necessários para a classificação das equipes concorrentes é o que emite uma listagem geral do desempenho das equipes, atribuindo pontos segundo determinadas normas: O algoritmo deverá: 
A.Ler:
A.1)uma linha contendo os tempos-padrão (em minutos decimais) para as três fases de competição;
A.2)um conjunto de linhas contendo cada uma o número de inscrição da equipe e os tempos (em minutos decimais) que as mesmas despenderam ao cumprir as três diferentes etapas. A última linha (flag), que não entrará nos cálculos, contém o número 9999 como número de inscrição.B.Calcular:
B.1) os pontos de cada equipe em cada uma das etapas, seguindo o seguinte critério. Seja ∆ o valor absoluto da diferença entre o tempo-padrão (lido na primeira linha) e o tempo despendido pela equipe numa etapa•∆ < 3 minutos – atribuir 100 pontos à etapa•3 <= ∆ <= 5 minutos – atribuir 80 pontos à etapa•∆ > 5 minutos – atribuir 80 – (∆ - 5)/5 pontos à etapa
B.2)o total de pontos de cada equipe nas três etapas;
B.3)a equipe vencedora.
C.Escrever:
C.1)para cada equipe, o número de inscrição, os pontos obtidos em cada etapa e o total de pontos obtidos.
*/
#include <iostream>

using namespace std;

int main() {
  float minutosP1, minutosP2, minutosP3, minutos1, minutos2, minutos3, pontosT = 0, pontos1 = 0, pontos2 = 0, pontos3 = 0, difereTempo1 = 0, difereTempo2 = 0, difereTempo3 = 0, maiorPonto = 0;
  int numInscri, equipeV = 0;

  cout << "-----------------------------------" << endl;
  cout << "Tempo padrão da primeira fase (em minutos): ";
  cin >> minutosP1;
  cout << "Tempo padrão da segunda fase (em minutos): ";
  cin >> minutosP2;
  cout << "Tempo padrão da terceira fase (em minutos): ";
  cin >> minutosP3;
  cout << "-----------------------------------" << endl;

  while (numInscri != 9999) {
    cout << "Número de inscrição da equipe: ";
    cin >> numInscri;

    if (numInscri == 9999) {
      break;
    }

    cout << "Tempo despendido pela equipe na primeira fase (em minutos): ";
    cin >> minutos1;
    cout << "Tempo despendido pela equipe na segunda fase (em minutos): ";
    cin >> minutos2;
    cout << "Tempo despendido pela equipe na terceira fase (em minutos): ";
    cin >> minutos3;
    
    if (minutos1 < minutosP1) {
      difereTempo1 = minutosP1 - minutos1;
      difereTempo1 *= -1;
    } else {
      difereTempo1 = minutos1 - minutosP1;
    }

    if (minutos2 < minutosP2) {
      difereTempo2 = minutosP2 - minutos2;
      difereTempo2 *= -1;
    } else {
      difereTempo2 = minutos2 - minutosP2;
    }

    if (minutos2 < minutosP2) {
      difereTempo3 = minutosP3 - minutos3;
      difereTempo3 *= -1;
    } else {
      difereTempo3 = minutos3 - minutosP3;
    }

    if (difereTempo1 < 3) {
      pontos1 = 100;
    } else {
      if (difereTempo1 >= 3 && difereTempo1 <= 5) {
        pontos1 = 80;
      } else {
        pontos1 = (80 - (difereTempo1 - 5)) / 5;
      }
    }
    if (difereTempo2 < 3) {
      pontos2 = 100;
    } else {
      if (difereTempo2 >= 3 && difereTempo2 <= 5) {
        pontos2 = 80;
      } else {
        pontos2 = (80 - (difereTempo2 - 5)) / 5;
      }
    }
    if (difereTempo3 < 3) {
      pontos3 = 100;
    } else {
      if (difereTempo3 >= 3 && difereTempo3 <= 5) {
        pontos3 = 80;
      } else {
        pontos3 = (80 - (difereTempo3 - 5)) / 5;
      }
    }

    pontosT = pontos1 + pontos2 + pontos3;

    if (pontosT > maiorPonto) {
      maiorPonto = pontosT;
      equipeV = numInscri;
    }

    cout << "-----------------------------------" << endl;
    cout << "Dados da equipe:" << endl;
    cout << "Número de inscrição: " << numInscri << endl;
    cout << "Pontos obtidos na primeira fase: " << pontos1 << endl;
    cout << "Pontos obtidos na segunda fase: " << pontos2 << endl;
    cout << "Pontos obtidos na terceira fase: " << pontos3 << endl;
    cout << "Total de pontos obtidos: " << pontosT << endl;
    cout << "-----------------------------------" << endl;
  }

  cout << "-----------------------------------" << endl;
  cout << "Equipe vencedora: " << equipeV << endl;
  cout << "Total de pontos: " << maiorPonto << endl;
  cout << "-----------------------------------" << endl;

  return 0;
}