/*
Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, num determinado dia. 
Para cada casa visitada, é fornecido o número do canal (4,5,7,12) e o número de pessoas que o estavam assistindo naquela casa. 
Se a televisão estivesse desligada, nada era anotado, ou seja, esta casa não entrava na pesquisa. Fazer um algoritmo que:
•leia um número indeterminado de dados, sendo que o “FLAG” corresponde ao número do canal igual a zero;
•calcule a porcentagem de audiência para cada emissora;
•escreva o número do canal e a sua respectiva porcentagem.
*/
#include <iostream>

using namespace std;

int main() {
  float pessoasAssis4 = 0, pessoasAssis5 = 0, pessoasAssis7 = 0, pessoasAssis12 = 0, pessoas;
  int canal, pessoasTotal = 0;
  do {
    cout << "Informe o canal assistido: ";
    cin >> canal;


    cout << "Informe quantas pessoas estão assistindo o canal: ";
    cin >> pessoas;

    pessoasTotal += pessoas;

    if (canal != 0) {
      if (canal == 4) {
        pessoasAssis4 += pessoas;
      } else {
        if (canal == 5) {
          pessoasAssis5 += pessoas;
        } else {
          if (canal == 7) {
            pessoasAssis7 += pessoas;
          } else {
            if (canal == 12) {
              pessoasAssis12 += pessoas;
            }
          }
        }
      }
    }

  } while (canal != 0);

  pessoasAssis4 = (pessoasAssis4 / pessoasTotal) * 100;
  pessoasAssis5 = (pessoasAssis5 / pessoasTotal) * 100;
  pessoasAssis7 = (pessoasAssis7 / pessoasTotal) * 100;
  pessoasAssis12 = (pessoasAssis12 / pessoasTotal) * 100;

  cout << "-----------------------------------" << endl;
  cout << "Número do canal: 4" << endl;
  cout << "\tAudiência do canal 4: " << pessoasAssis4 << "%" << endl;
  cout << "-----------------------------------" << endl;
  cout << "Número do canal: 5" << endl;
  cout << "\tAudiência do canal 5: " << pessoasAssis5 << "%" << endl;
  cout << "-----------------------------------" << endl;
  cout << "Número do canal: 7" << endl;
  cout << "\tAudiência do canal 7: " << pessoasAssis7 << "%" << endl;
  cout << "-----------------------------------" << endl;
  cout << "Número do canal: 12" << endl;
  cout << "\tAudiência do canal 12: " << pessoasAssis12 << "%" << endl;
  cout << "-----------------------------------" << endl;
  
  return 0;
}