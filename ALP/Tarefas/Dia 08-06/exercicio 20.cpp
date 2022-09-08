/*
Fazer um algoritmo para calcular o número de dias decorridos entre duas datas (considerar também a ocorrência de anos bissextos), sabendo-se que:
a)cada par de datas é lido numa linha, a última linha contém o número do dia negativo 
b)a primeira data na linha é sempre a mais antiga.O ano está digitado com quatro dígitos
*/
#include <iostream>

using namespace std;

int main() {
  int diaI, mesI, anoI, diaF, mesF, anoF, diferenAnos, aumentaMes, acrescimoDias, simulaAno, simulaMes, simulaDia, numDias;

  do {
    diferenAnos = aumentaMes = acrescimoDias = simulaAno = simulaMes = simulaDia = numDias = 0;

    cout << "Data inicial:" << endl;
    cout << "\tInforme  dia: ";
    cin >> diaI;

    if (diaI == 0) {
      break;
    }

    cout << "\tInforme  mês: ";
    cin >> mesI;
    cout << "\tInforme  ano: ";
    cin >> anoI;

    cout << "Data final:" << endl;
    cout << "\tInforme  dia: ";
    cin >> diaF;

    if (diaF == 0) {
      break;
    }

    cout << "\tInforme  mês: ";
    cin >> mesF;
    cout << "\tInforme  ano: ";
    cin >> anoF;

    if (anoF < anoI) {
      while (anoF < anoI) {
        cout << "Ano final é menor que o ano inicial" << endl;
        cout << "Informe um ano válido: ";
        cin >> anoF;
      }
    }
    if (anoF == anoI) {
      if (mesF < mesI) {
        while (mesF < mesI) {
          cout << "Mês final é menor que o mês inicial" << endl;
          cout << "Informe um mês válido: ";
          cin >> mesF;
        }
      }
    }
    if (anoF == anoI) {
      if (mesF == mesI) {
        if (diaF < diaI) {
          while (diaF < diaI) {
            cout << "Dia final é menor que o dia inicial" << endl;
            cout << "Informe um dia válido: ";
            cin >> diaF;
          }
        }
      }
    }
    
    diferenAnos = anoF - anoI;
    simulaAno = anoI;
    while (simulaAno <= anoF) {
      if ((simulaAno % 400 == 0) || (simulaAno % 4 == 0 && simulaAno % 100 != 0)) {
        numDias++;
      }
      simulaAno++;
    }
    if ((diaF >= 1 && mesF >= 3)  && ((anoF % 400 == 0) || (anoF % 4 == 0 && anoF % 100 != 0))) {
      acrescimoDias--;
    }
    if ((diaI >= 1 && mesI >= 3) && ((anoI % 400 == 0) || (anoI % 4 == 0 && anoI % 100 != 0))) {
      acrescimoDias--;
    }

    numDias += acrescimoDias;
    numDias += diferenAnos * 365;
    simulaDia = diaI;
    simulaMes = mesI;
    if ((diaI == 31) && (mesI == 1 || mesI == 3 || mesI == 5 || mesI == 7 || mesI == 8 || mesI == 10 || mesI == 12)) {
      numDias += 2;
      simulaDia = 1;
      simulaMes++;
    } else {
      if ((diaI == 30) && (mesI == 4 || mesI == 6 || mesI == 9 || mesI == 11)) {
        numDias += 2;
        simulaDia = 1;
        simulaMes++;
      } else {
        if (diaI == 28 && mesI == 2) {
          numDias += 2;
          simulaDia = 1;
          simulaMes++;
        } else {
          numDias--;
        }
      }
    }

    aumentaMes = simulaMes;
    while (aumentaMes != mesF) {
      if (mesI == 1 || mesI == 3 || mesI == 5 || mesI == 7 || mesI == 8 || mesI == 10) {
        numDias += 31;
      } else {
        if (mesI == 4 || mesI == 6 || mesI == 9 || mesI == 11) {
          numDias += 30;
        } else {
          numDias += 28;
        }
      }

      aumentaMes++;
    }
    
    cout << "O número de dias entre " << diaI << "/" << mesI << "/" << anoI << " e " << diaF << "/" << mesF << "/" << anoF << " é igual a " << numDias << " dias" << endl;

  } while (diaI != 0 || diaF != 0);

  return 0;
}