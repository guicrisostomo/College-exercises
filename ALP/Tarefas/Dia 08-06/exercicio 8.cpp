/*
Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não). Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um algoritmo que calcule e escreva:
•o número de pessoas que responderam sim;
•o número de pessoas que responderam não;
•a porcentagem de pessoas do sexo feminino que responderam sim;
•a ppiorcentagem de pessoas do sexo masculino que responderam não;
*/
#include <iostream>

using namespace std;

int main() {
  char sexo, resposta;
  float i = 0, numMasc = 0, numFemi = 0, numFemiS = 0, numMascN = 0, respS = 0, respN = 0, porcenMasc = 0, porcenFen = 0;

  do {
    i++;
    cout << "Informe o sexo" << endl;
    cout << "Sendo 'M' para masculino e 'F' para feminino" << endl;
    cin >> sexo;
    cout << "A pessoa gostou do novo produto lançado no mercado ?" << endl;
    cout << "Sendo 'S' para sim e 'N' para não" << endl;
    cin >> resposta;

    if (sexo == 'M' || sexo == 'm') {
      numMasc++;
      if (resposta == 'N' || resposta == 'n') {
        numMascN++;
        respN++;
      }
      if (resposta == 'S' || resposta == 's') {
        respS++;
      }
    } else {
      if (sexo == 'F' || sexo == 'f') {
        numFemi++;
        if (resposta == 'S' || resposta == 's') {
          numFemiS++;
          respS++;
        }
        if (resposta == 'N' || resposta == 'n') {
          respN++;
        }
      } else {
        cout << "Informe um sexo válido!" << endl;
        i--;
      }
    }
  } while (i < 2000);

  porcenMasc = (numMascN / numMasc) * 100;
  porcenFen = (numFemiS / numFemi) * 100;

  cout << "------------------------------------------" << endl;
  cout << "Número de pessoas que responderam 'não': " << respN << endl;
  cout << "Número de pessoas que responderam 'sim': " << respS << endl;
  cout << "Número de pessoas do sexo feminino que responderam 'sim': " << porcenFen << "%" << endl;
  cout << "Número de pessoas do sexo masculino que responderam 'não': " << porcenMasc << "%" << endl;
  cout << "------------------------------------------" << endl;

  return 0;
}