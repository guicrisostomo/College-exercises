/*
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. 
Para isto, mandou digitar uma linha para cada mercadoria com nome, preço de compra e preço de venda das mesmas. 
Fazer um algoritmo que:determine e escreva quantas mercadorias proporcionam: lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%. Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total. 
Observação: o aluno deve adotar um flag.
*/
#include <iostream>

using namespace std;

int main() {
  int lucro10 = 0, lucro1020 = 0, lucro20 = 0;
  string nome;
  float pc, pv, total_pc = 0, total_pv = 0, lucro;
  char continua = 'S';

  while(continua == 'S') {
  cout << "Nome: ";
  cin >> nome;
  cout << "Preço de compra: ";
  cin >> pc;
  cout << "Preço de venda: ";
  cin >> pv;

  lucro = pv/pc - 1;

  if (lucro < 0.1)
    lucro10++;
  else if (lucro <= 0.2)   lucro1020++;
  else
    lucro20++;

  total_pc += pc;
  total_pv += pv;

  cout << "Deseja inserir mais produtos ? [S]IM, [N]ÃO: " << endl;
  cin >> continua;
  }

  cout << "Produto com lucro menor que 10%: " << lucro10 << endl;
  cout << "Produtos com lucro entre 10% e 20%: " << lucro1020 << endl;
  cout << "Produto com lucro maior que 20%: " << lucro20;
  cout << "Total de compra: " << total_pc << endl;
  cout << "Total de venda: " << total_pv << endl;
  return 0;
}