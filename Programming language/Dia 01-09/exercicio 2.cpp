#include <iostream>
#define MAX 10

using namespace std;

int main()
{
    float temperatura[MAX], mediaTempe, maiorTempe, menorTempe;
    int i;

    mediaTempe = 0;
    maiorTempe = 0;
    menorTempe = 0;

    for (i = 0; i < MAX; i++) {
        cout << "Informe a temperatura: ";
        cin >> temperatura[i];

        if (i == 0) {
            maiorTempe = temperatura[i];
            menorTempe = temperatura[i];
        }

        if (maiorTempe < temperatura[i]) {
            maiorTempe = temperatura[i];
        } else {
            if (menorTempe > temperatura[i]) {
                menorTempe = temperatura[i];
            }
        }

        mediaTempe += temperatura[i];

    }

    mediaTempe /= i;

    system("clear");

    cout << "---------------------Temperaturas informadas---------------------" << endl;

    for (i = 0; i < MAX; i++) {
        cout << temperatura[i] << endl;
    }

    cout << "---------------------------Resultados----------------------------" << endl;
    cout << "Média das temperaturas: " << mediaTempe << endl;
    cout << "Maior temperatura: " << maiorTempe << endl;
    cout << "Menor temperatura: " << menorTempe << endl;
    cout << "-----------------------------------------------------------------" << endl;

    return 0;
}
