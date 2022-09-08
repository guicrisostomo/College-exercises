/*
Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer um algoritmo que:
•leia inicialmente o número de crianças nascidas no período;
•leia, em seguida um número indeterminado de linhas, contendo, cada uma, o sexo de uma criança morta (M, F) e o número de meses de vida da criança. 
A última linha, que não entrará nos cálculos, contém no lugar do sexo a letra V;
•determine e imprima:
a)a porcentagem de crianças mortas no período;
b)a porcentagem de crianças do sexo masculino mortas no período;
c)a porcentagem de crianças que viveram 24 meses ou menos no período.
*/
#include <iostream>

using namespace std;

int main() {
  float nascidas, meses, porcenMort, porcenMortM, porcenMort24;
  char sexo;

  porcenMort = porcenMortM = porcenMort24 = 0;

  cout << "Número de crianças nascidas: ";
  cin >> nascidas;

  do {
    cout << "Informe o sexo da criança morta ('M' para masculino, 'F' para feminino e 'V' para sair do loop)" << endl;
    cin >> sexo;
    if (sexo == 'V' || sexo == 'v') {
      break;
    } else {
      if (sexo == 'M' || sexo == 'm') {
        porcenMortM++;
      } else {
        if (sexo != 'F' && sexo != 'f') {
          do {
            cout << "Por favor, informe um sexo válido!" << endl;
            cout << "Informe o sexo da criança morta ('M' para masculino, 'F' para feminino e 'V' para sair do loop)" << endl;
            cin >> sexo;

            if (sexo == 'V' || sexo == 'v') {
              break;
            } else {
              if (sexo == 'M' || sexo == 'm') {
                porcenMortM++;
                break;
              } else {
                if (sexo == 'F' || sexo == 'f') {
                  break;
                }
              }
            }
          } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f' && sexo != 'V' && sexo != 'v');
        }
      }
    }
    cout << "Informe o número de meses de vida da criança: " << endl;
    cin >> meses;

    if (meses <= 24) {
      porcenMort24++;
    }
    porcenMort++;
  } while (sexo != 'V' && sexo != 'v');

  porcenMortM = (porcenMortM / porcenMort) * 100;
  porcenMort24 = (porcenMort24 / porcenMort) * 100;
  porcenMort = (porcenMort / nascidas) * 100;
  
  cout << "Porcentagem de crianças mortas: " << porcenMort << "%" << endl;
  cout << "Porcentagem de crianças do sexo masculino mortas: " << porcenMortM << "%" << endl;
  cout << "Porcentagem de crianças que viveram 24 meses ou menos: " << porcenMort24 << "%" << endl;

  return 0;
}