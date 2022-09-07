#include <iostream>

using namespace std;

int main() {
  float cotacaoDia1, cotacaoDia2, cotacaoDia3, maisLucrati, maisPrejudi, variacao;
  int tendenciaAlta, tendenciaBaixa, i;
  string nomeAtivo, nomeAtivoLucrati, nomeAtivoPrejudi;

  tendenciaAlta = tendenciaBaixa = maisLucrati = maisPrejudi = variacao = i = 0;
  
  cout << "Para encerrar o loop, digite '9999' em uma das cotações." << endl;
  
  do {
    cout << "Informe o nome do ativo: " << endl;
    getline(cin, nomeAtivo);

    if (nomeAtivo == "") {
      getline(cin, nomeAtivo);
    }

    cout << "Informe a cotação de hoje:" << endl;
    cin >> cotacaoDia1;

    if (cotacaoDia1 == 9999) {
      break;
    }

    cout << "Informe a cotação de ontem:" << endl;
    cin >> cotacaoDia2;

    if (cotacaoDia2 == 9999) {
      break;
    }

    cout << "Informe a cotação de 2 dias atrás:" << endl;
    cin >> cotacaoDia3;

    if (cotacaoDia3 == 9999) {
      break;
    }
    
    variacao = ((cotacaoDia1 * 100) / cotacaoDia3) - 100;

    if (variacao > 0) {
      tendenciaAlta++;
      cout << "O ativo " << nomeAtivo << " está em tendência de alta tendo se valorizado " << variacao << "% nos últimos 3 dias" << endl;
    } else {
      if (variacao < 0) {
        tendenciaBaixa++;
        cout << "O ativo " << nomeAtivo << " está em tendência de baixa tendo se desvalorizado " << (variacao * -1) << "% nos últimos 3 dias" << endl;
      }
    }

    if (variacao > maisLucrati || i == 0) {
      maisLucrati = variacao;
      nomeAtivoLucrati = nomeAtivo;
    }
    if (variacao < maisPrejudi || i == 0) {
      maisPrejudi = variacao;
      nomeAtivoPrejudi = nomeAtivo;
    }

    i++;
  } while (cotacaoDia1 != 9999 && cotacaoDia2 != 9999 && cotacaoDia3 != 9999);

  cout << "---------------------------------------------" << endl;
  cout << "Número de ativos com tendência de alta: " << tendenciaAlta << endl;
  cout << "Número de ativos com tendência de baixa: " << tendenciaBaixa << endl;
  cout << "Ativo mais lucrativo: " << nomeAtivoLucrati << endl;
  cout << "Ativo mais prejucial: " << nomeAtivoPrejudi << endl;
  cout << "---------------------------------------------" << endl;

  return 0;
}