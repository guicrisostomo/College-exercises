/*
Escreva um programa que leia três medidas e informe se as medidas formam um triângulo. Se formar, indique o tipo de triângulo:
Isósceles dois lados iguais, escaleno todos os lados diferentes e equilátero todos os lados iguais.

Considere:

Para construir um triângulo é necessário que a medida de qualquer um dos lados seja menor que a soma das medidas dos outros
dois e maior que o valor absoluto da diferença entre essas medidas.
*/
#include <iostream>

using namespace std;

int main()
{
    int med1, med2, med3, valorAbs1, valorAbs2, valorAbs3;

    cout << "-----------------------Verificacao de triangulo-----------------------" << endl;
    cout << "Informe as 3 medidas do triangulo:" << endl;
    cin >> med1 >> med2 >> med3;

    cout << "----------------------------------------------------------------------" << endl;

    valorAbs1 = med2 - med3;
    valorAbs2 = med1 - med3;
    valorAbs3 = med1 - med2;

    if (valorAbs1 < 0) {
        valorAbs1 *= -1;
    }

    if (valorAbs2 < 0) {
        valorAbs2 *= -1;
    }

    if (valorAbs3 < 0) {
        valorAbs3 *= -1;
    }

    if ((med1 + med2 < med3 || med3 < valorAbs3) || (med1 + med3 < med2 || med2 < valorAbs2) || (med2 + med3 < med1 || med1 < valorAbs1)) {
        cout << " As medidas nao formam um triangulo!" << endl;
    } else {
        if (med1 == med2 && med2 == med3) {
            cout << " O triangulo eh equilatero!" << endl;
        } else {
            if ((med1 != med2) && (med1 != med3) && (med2 != med3)) {
                cout << " O triangulo eh escaleno!" << endl;
            } else {
                cout << " O triangulo eh isosceles!" << endl;
            }
        }
    }

    cout << "----------------------------------------------------------------------" << endl;

    return 0;
}
