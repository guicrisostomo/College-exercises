/*
Uma determinada fábrica de rádios possui duas linhas de montagem distintas: standard e luxo. A linha de montagem standard comporta um máximo de 24 operários; 
cada rádio standard dá um lucro de X reais e gasta um homem-dia para sua confecção. 
A linha de montagem luxo comporta no máximo 32 operários; 
e cada rádio luxo dá um lucro de Y reais e gasta 2 homens-dia para sua confecção. 
A fábrica possui 40 operários. 
O mercado é capaz de absorver toda a produção e o fabricante deseja saber qual esquema de produção a adotar de modo a maximizar seu lucro diário. 
Fazer um algoritmo que leia os valores de X e Y e escreva, para esse esquema de lucro máximo, o número de operários na linha standard e na linha luxo, o número de rádios standard e luxo produzidos e o lucro.
*/
#include <iostream>

using namespace std;

int main() {
  float valorX, valorY, numOperarioS = 26, numOperarioL = 14, numRadioS = 0, numRadioL = 0, lucroL = 0, lucroS = 0, lucroTotal = 0, lucroMax = 0, lucroSMax = 0, lucroLMax = 0, numOperarioLMax = 0, numOperarioSMax = 0;

  cout << "Informe o valor de lucro da rádio standard: R$ ";
  cin >> valorX;
  cout << "Informe o valor de lucro da rádio luxo: R$ ";
  cin >> valorY;

  for ( ; numOperarioL <= 32; ) {
    numOperarioL += 2;
    numOperarioS -= 2;

    lucroL = numOperarioL * valorY;
    lucroS = numOperarioS * valorX;
    lucroTotal = lucroL + lucroS;

    if (lucroTotal > lucroMax) {
      lucroMax = lucroTotal;
      numOperarioLMax = numOperarioL;
      numOperarioSMax = numOperarioS;
      lucroLMax = lucroL;
      lucroSMax = lucroS;
    }
  }

  cout << "-------------------------------------------" << endl;
  cout << "Lucro máximo:" << endl;
  cout << "\tLucro total produzido: " << lucroMax << endl;
  cout << "\tLucro da rádio standard: " << lucroSMax << endl;
  cout << "\tLucro da rádio luxo: " << lucroLMax << endl;
  cout << "\tNúmero de operários da rádio standard: " << numOperarioSMax << endl;
  cout << "\tNúmero de operários da rádio luxo: " << numOperarioLMax << endl;
  cout << "-------------------------------------------" << endl;

  return 0;
}