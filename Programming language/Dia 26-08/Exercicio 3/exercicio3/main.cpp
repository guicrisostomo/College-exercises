/*
3) Escreva um programa que receba n notas e retorne a m�dia das notas digitadas.
*/
#include <iostream>

using namespace std;

int main()
{
    float nota, contador, acumulador, media;

    contador = 0;
    acumulador = 0;

    do {
        cout << "\nPara encerrar o programa digite um n�mero negativo" << endl;;
        cout << "Informe a nota do aluno: ";
        cin >> nota;

        if (nota < 0) {
            break;
        }

        acumulador += nota;
        contador++;
    } while (nota > -1);

    media = (float) acumulador / (float) contador;

    cout << "A m�dia do aluno foi " << media << endl;

    return 0;
}
