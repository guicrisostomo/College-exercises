/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). 
Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
Se o estado digitado não for válido, mostrar uma mensagem de erro.
*/
#include <iostream>

using namespace std;

int main() {
  float valor, valorFinal;
  string estado;

  cout << "Informe o valor do produto" << endl;
  cin >> valor;
  cout << "Informe o estado de destino" << endl;
  cin >> estado;

  if (estado == "MG" || estado == "mg") {
    valorFinal = valor * 1.07;
  } else {
    if (estado == "SP" || estado == "sp") {
      valorFinal = valor * 1.12;
    } else {
      if (estado == "RJ" || estado == "rj") {
        valorFinal = valor * 1.15;
       } else {
        if (estado == "MS" || estado == "ms") {
          valorFinal = valor * 1.08;
        } else {
          cout << "Por favor, informe um estado válido!" << endl;
          return 0;
        }
      }
    }
  }

  cout << "O preço final do produto é R$ " << valorFinal << endl;

  return 0;
}