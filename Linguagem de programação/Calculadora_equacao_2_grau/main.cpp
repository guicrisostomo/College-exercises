#include <iostream>
#include <cmath>

using namespace std;

float delta(float a, float b, float c) {
    float deltaVariavel;

    deltaVariavel = ((b * b) - (4 * a * c));
    return deltaVariavel;
}

void valorX(float delta, float a, float b, float *x1, float *x2) {
    *x1 = (-b + pow(delta, 0.5))/(2 * a);
    *x2 = (-b - pow(delta, 0.5))/(2 * a);
}

void menuOpcao2(float a, float b, float c) {
    system("clear");

    float deltaVariavel, x1Variavel, x2Variavel;

    cout << "-------------------- RESULTADO ---------------------\n\n";

    deltaVariavel = delta(a, b, c);

    cout << "\tO valor de delta eh: " << deltaVariavel << endl;

    if (deltaVariavel >= 0) {
        valorX(deltaVariavel, a, b, &x1Variavel, &x2Variavel);

        cout << "\tO valor de x1 eh: " << x1Variavel << endl;
        cout << "\tO valor de x2 eh: " << x2Variavel << endl;
    } else {
        cout << "\tO valor de x1 eh: impossivel determinar" << endl;
        cout << "\tO valor de x2 eh: impossivel determinar" << endl;
        cout << "\n\tEh impossivel determinar pois o delta eh negativo" << endl;
    }

    cout << "\n----------------------------------------------------\n";

    system("pause");
    system("clear");
}


void menuOpcao1(float *a, float *b, float *c) {
    system("clear");

    cout << "-------------------- NOVO CALCULO ---------------------" << endl;

    cout << "Informe o valor de a: ";
    cin >> *a;
    cout << "Informe o valor de b: ";
    cin >> *b;
    cout << "Informe o valor de c: ";
    cin >> *c;

    cout << "-------------------------------------------------------" << endl;

    system("pause");
    system("clear");
}

int main()
{
    int opcao;
    float a, b, c;

    menuOpcao1(&a, &b, &c);
    menuOpcao2(a, b, c);

    do {

        system("clear");

        cout << "----------------------- MENU -----------------------\n\n";
        cout << "\t1 - Novo calculo" << endl;
        cout << "\t2 - Imprimir resultado anterior" << endl;
        cout << "\t9 - Sair\n\n";
        cout << "----------------------------------------------------\n\n";
        cout << "\tDigite o numero aqui: ";
        cin >> opcao;

        system("clear");

        switch (opcao) {
            case 1:
                menuOpcao1(&a, &b, &c);

                break;
            case 2:
                menuOpcao2(a, b, c);

                break;
            case 9:
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opcao invalida!\n";
                system("pause");
                break;
        }
    } while (opcao != 9);

    return 0;
}
