/*
Escreva um programa que receba dois números inteiros e que disponibilize as opções abaixo e imprima o resultado da operação:
•A - retornar o soma de dois números;
•S - retornar a subtração de dois números;
•M - retornar a multiplicação de dois números; 
•Q - retornar o quociente inteiro de uma divisão; 
•E - retornar mensagem de erro (opção inválida).
*/
#include <iostream>

using namespace std;

int main() {
  int num1, num2, valor;
  string opcao;

  cout << "Informe dois números" << endl;
  cin >> num1 >> num2;

  cout << "Informe o que deseja fazer com eles. Sendo: " << endl;
  cout << "A - para somar" << endl;
  cout << "S - para subtrair" << endl;
  cout << "M - para multiplicar" << endl;
  cout << "Q - para dividir" << endl;
  cin >> opcao;

  if (opcao == "A" || opcao == "a") {
    valor = num1 + num2;
    cout << num1 << " + " << num2 << " = " << valor << endl;
    return 0;
  } else {
    if (opcao == "S" || opcao == "s") {
      valor = num1 - num2;
      cout << num1 << " - " << num2 << " = " << valor << endl;
      return 0;
    } else {
      if (opcao == "M" || opcao == "m") {
        valor = num1 * num2;
        cout << num1 << " X " << num2 << " = " << valor << endl;
        return 0;
      } else {
        if (opcao == "Q" || opcao == "q") {
          if (num2 != 0) {
            valor = num1 / num2;
            cout << num1 << " / " << num2 << " = " << valor << endl;
            return 0;
          } else {
            cout << "Divisão inválida!" << endl;
            return 0;
          }
        } else {
          cout << "Informe uma opção válida!" << endl;
        }
      }
    }
  }
}