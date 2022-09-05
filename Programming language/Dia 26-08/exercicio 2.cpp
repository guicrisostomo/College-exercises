/*
2) Escreva um programa que receba duas notas, calcule a média e informe se o aluno está aprovado, reprovado ou de exame seguindo
os seguintes critérios: Aprovado: média >=6, reprovado: média < 3 e exame média entre um número maior ou igual a 3 e menor do
que 6.
*/
#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, media;

    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    if (media >= 6) {
        cout << "O aluno foi aprovado!" << endl;
    } else {
        if (media >= 3 && media < 6) {
            cout << "O aluno deverá fazer o exame!" << endl;
        } else {
            cout << "O aluno foi reprovado!" << endl;
        }
    }

    return 0;
}
