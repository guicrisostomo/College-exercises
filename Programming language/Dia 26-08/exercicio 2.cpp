/*
2) Escreva um programa que receba duas notas, calcule a m�dia e informe se o aluno est� aprovado, reprovado ou de exame seguindo
os seguintes crit�rios: Aprovado: m�dia >=6, reprovado: m�dia < 3 e exame m�dia entre um n�mero maior ou igual a 3 e menor do
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
            cout << "O aluno dever� fazer o exame!" << endl;
        } else {
            cout << "O aluno foi reprovado!" << endl;
        }
    }

    return 0;
}
