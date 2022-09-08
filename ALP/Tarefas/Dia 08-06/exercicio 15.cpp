/*
Os bancos atualizam diariamente as contas de seus clientes. Essa atualização envolve a análise dos depósitos e retiradas de cada conta. 
Numa conta de balanço mínimo, uma taxa de serviço é deduzida se a conta cai abaixo de uma certa quantia especificada. 
Suponha que uma conta particular comece o dia com um balanço de R$ 60,00. 
O balanço mínimo exigido é R$ 30,00 e se o balanço de fim de dia for menor do que isso, uma taxa é reduzida da conta. A fim de que essa atualização fosse feita utilizando computador, é fornecido o seguinte conjunto de dados:t=ev
•a primeira linha contém o valor do balanço mínimo diário, quantidade de transações e taxa de serviço;
•as linhas seguintes contém número da conta, valor da transação e código da transação (depósito ou retirada);
*/
#include <iostream>

using namespace std;

int main() {
  float balancoMin, qtdTrans, taxaServico, valorTrans, saldo = 0;
  char codigoTrans;
  int numConta;
  cout << "Informe o balanço mínimo diário, quantidade de transações e taxa de serviço, respectivamente" << endl;
  cin >> balancoMin >> qtdTrans >> taxaServico;

  do {
    cout << "Informe o número da conta: ";
    cin >> numConta;
    cout << "Informe o valor da transação: ";
    cin >> valorTrans;
    cout << "Informe o código da transação. Sendo 'D' para 'Depósito' e 'R' para 'Retirada': ";
    cin >> codigoTrans;
    qtdTrans--;

    if (codigoTrans == 'D' || codigoTrans == 'd') {
      saldo += valorTrans;
    } else {
      if (codigoTrans == 'R' || codigoTrans == 'r') {
        saldo -= valorTrans;
      }
    }

    cout << "--------------------------" << endl;

    if (saldo < balancoMin) {
      saldo = saldo - ((saldo * taxaServico) / 100);
      cout << "Número da conta: " << numConta << endl;
      cout << "NÃO HÁ FUNDOS" << endl;
    } else {
      cout << "Número da conta: " << numConta << endl;
      cout << "Saldo: " << saldo << endl;
    }

    cout << "--------------------------" << endl;
  } while (qtdTrans != 0);

  return 0;
}