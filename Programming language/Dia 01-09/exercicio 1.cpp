#include <iostream>

using namespace std;

int main()
{
    float peso, altura, mediaPeso, mediaAltura, maiorPeso, menorPeso, maiorIMC, menorIMC, mediaIMC, maiorAltura, menorAltura, IMC, contador;

    mediaPeso = 0;
    mediaAltura = 0;
    mediaIMC = 0;
    contador = 0;

    do {
        cout << "Para encerrar o programa digite um número negativo" << endl;
        cout << "Informe a altura: ";
        cin >> altura;

        if (altura < 0) {
            break;
        }

        cout << "Informe o peso: ";
        cin >> peso;

        if (peso < 0) {
            break;
        }

        IMC = (peso) / (altura * altura);

        cout << "Seu IMC é " << IMC << endl;

        if (contador == 0) {
            maiorPeso = peso;
            maiorAltura = altura;
            maiorIMC = IMC;

            menorPeso = peso;
            menorAltura = altura;
            menorIMC = IMC;
        }

        if (maiorAltura < altura) {
            maiorAltura = altura;
        } else {
            if (menorAltura > altura) {
                menorAltura = altura;
            }
        }

        if (maiorPeso < peso) {
            maiorPeso = peso;
        } else {
            if (menorPeso > peso) {
                menorPeso = peso;
            }
        }

        if (maiorIMC < IMC) {
            maiorIMC = IMC;
        } else {
            if (menorIMC > IMC) {
                menorIMC = IMC;
            }
        }

        mediaAltura += altura;
        mediaPeso += peso;
        mediaIMC += IMC;

        contador++;
    } while (altura > 0 && peso > 0);

    mediaAltura /= contador;
    mediaPeso /= contador;
    mediaIMC /= contador;

    system("clear");

    cout << "--------------------------------------------" << endl;
    cout << "Altura:" << endl;
    cout << "\t-Maior: " << maiorAltura << endl;
    cout << "\t-Menor: " << menorAltura << endl;
    cout << "\t-Media: " << mediaAltura << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Peso:" << endl;
    cout << "\t-Maior: " << maiorPeso << endl;
    cout << "\t-Menor: " << menorPeso << endl;
    cout << "\t-Media: " << mediaPeso << endl;
    cout << "--------------------------------------------" << endl;
    cout << "IMC:" << endl;
    cout << "\t-Maior: " << maiorIMC << endl;
    cout << "\t-Menor: " << menorIMC << endl;
    cout << "\t-Media: " << mediaIMC << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
