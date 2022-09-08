/*
Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. 
Fazer um algoritmo que calcule e escreva:
•a maior e a menor altura do grupo;
•a média de altura das mulheres;
•o número de homens;
*/
#include <iostream>

using namespace std;

int main() {
  float altura, mediaAlturaMul, maiorAltura, menorAltura;
  int i, numHom, numMul;
  char sexo;
  mediaAlturaMul = maiorAltura = menorAltura = numHom = numMul = i = 0;

  do {
    cout << "Informe a altura" << endl;
    cin >> altura;
    cout << "Informe o sexo" << endl;
    cout << "Sendo 'M' para masculino e 'F' para feminino" << endl;
    cin >> sexo;
    
    if (altura < menorAltura) {
      menorAltura = altura;
    } else {
      if (altura > maiorAltura) {
        maiorAltura = altura;
      }
    }

    if (i == 0) {
      menorAltura = altura;
      maiorAltura = altura;
    }

    if (sexo == 'M' || sexo == 'm') {
      numHom++;
    } else {
      if (sexo == 'F' || sexo == 'f') {
        mediaAlturaMul += altura;
        numMul++;
      } else {
        cout << "Sexo inválido!" << endl;
        i--;
      }
    }
    
    i++;
  } while (i != 5);

  mediaAlturaMul /= numMul;

  cout << "----------------------------------" << endl;
  cout << "Maior altura do grupo: " << maiorAltura << endl;
  cout << "Menor altura do grupo: " << menorAltura << endl;
  cout << "Média de altura das mulheres: " << mediaAlturaMul << endl;
  cout << "Número de homens: " << numHom << endl;
  cout << "Número de mulheres: " << numMul << endl;
  cout << "----------------------------------" << endl;

  return 0;
}