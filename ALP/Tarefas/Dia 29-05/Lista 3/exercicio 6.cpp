/*
Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível 
por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.
*/
#include <iostream>

using namespace std;

int main() {
  int ano;

  cout << "Digite o ano: ";
  cin >> ano;

  if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
    cout << "O ano é bissexto" << endl;
  } else {
    cout << "O ano não é bissexto" << endl;
  }
}