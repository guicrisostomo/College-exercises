#include <iostream>

using namespace std;

int main() {
  float peso, comprimento, largura, profundidade, volume;
  char material;

  volume = 0;

  cout << "----------------------- Dados da peça -----------------------" << endl;
  cout << "Peso (em gramas): ";
  cin >> peso;
  cout << "Comprimento (em centímetros): ";
  cin >> comprimento;
  cout << "Largura (em centímetros): ";
  cin >> largura;
  cout << "Profundidade (em centímetros): ";
  cin >> profundidade;
  cout << "Material:" << endl;
  cout << "Sendo: 'V' para vidro, 'P' para plástico e 'M' para metal" << endl;
  cin >> material;
  cout << "-------------------------------------------------------------" << endl;

  volume = comprimento * largura * profundidade;

  if (material == 'P' || material == 'p') {
    if (peso > 30000 || volume > 50 || profundidade >= 1000) {
      cout << "Peça não passou no controle de qualidade!" << endl;
    } else {
      cout << "Peça passou no controle de qualidade!" << endl;
    }
  } else {
    if (material == 'V' || material == 'v') {
      if (largura > 25 && peso > 1000 && volume > 35 && profundidade < 10) {
        cout << "Peça passou no controle de qualidade!" << endl;
      } else {
        cout << "Peça não passou no controle de qualidade!" << endl;
      }
    } else {
      if (material == 'M' || material == 'm') {
        if (volume < 80 && peso < 100000 && comprimento > 10) {
          cout << "Peça passou no controle de qualidade!" << endl; 
        } else {
          cout << "Peça não passou no controle de qualidade!" << endl;
        }
      } else {
        cout << "Material inválido!" << endl;
      }
    }
  }

  return 0;
}