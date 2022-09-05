/*
1) Escreva um programa para calcular o delta e as raízes de uma função de segundo grau.

Delta = b*b-4*a*c

X1=(b-+raiz(Delta)/(2*a)

X2=(b-+raiz(Delta)/(2*a)
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, delta, opcao;
    float x1, x2;

    cout << "---------------------------Calculadora de função do segundo grau---------------------------" << endl;

    opcao = 0;

    do {

        cout << "Informe o valor de a (com o x2): ";
        cin >> a;
        cout << "Informe o valor de b (com o x): ";
        cin >> b;
        cout << "Informe o valor de c (com o número isolado): ";
        cin >> c;

        cout << "A funcao eh " << a << "x2 " << b << "x " << c << endl;
        cout << "Digite 1 para confirmar: ";
        cin >> opcao;

    } while (opcao != 1);

    delta = pow(b, 2) - (4 * a * c);
    x1 = ((b * -1) + pow(delta, 0.5)) / (2 * a);
    x2 = ((b * -1) - pow(delta, 0.5)) / (2 * a);

    system("cls");

    cout << " -----------Resultado-----------" << endl;
    cout << "  A funcao eh " << a << "x2 " << b << "x " << c << endl;
    cout << " -------------------------------" << endl;

    cout << "  Delta = " << delta << endl;
    cout << "  X1 = " << x1 << endl;
    cout << "  X2 = " << x2 << endl;

    cout << " -------------------------------" << endl;

    return 0;
}
