#include <iostream>
#define MAX 10

using namespace std;

int main()
{
    int fila[MAX], fim, i, opcao, valorPosterior;
    char opcaoSN;

    fim = 0;
    valorPosterior = 0;

    do {

        system("clear");

        cout << "----------------------- MENU -----------------------\n\n";
        cout << "\t1 - Push (inserir elemento na fila)" << endl;
        cout << "\t2 - Pop (remover elemento da fila)" << endl;
        cout << "\t3 - Imprimir fila" << endl;
        cout << "\t9 - Sair\n\n";
        cout << "----------------------------------------------------\n\n";
        cout << "\tDigite o numero aqui: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                system("clear");

                do {
                    cout << "-------------------- ADICIONANDO ELEMENTO NA FILA ---------------------" << endl;

                    if (fim == (MAX - 1)) {
                        cout << "\tImpossivel inserir elemento!" << endl;
                        cout << "\tFila cheia!" << endl;
                        cout << "-----------------------------------------------------------------------" << endl;

                        break;
                    }



                    cout << "Qual numero deseja inserir ?" << endl;
                    cin >> fila[fim];

                    fim++;

                    cout << "\nNumero adicionado com sucesso!" << endl;
                    cout << "-----------------------------------------------------------------------" << endl;

                    cout << "Deseja inserir novo numero ? (S/N)" << endl;
                    cin >> opcaoSN;

                    opcaoSN = toupper(opcaoSN);

                    system("clear");

                } while(opcaoSN != 'N');

                system("pause");
                break;
            case 2:
                system("clear");

                do {
                    cout << "------------ REMOVENDO ELEMENTO DA FILA ------------" << endl;

                    if (fim == 0) {
                        cout << "\tImpossivel remover elemento!" << endl;
                        cout << "\tFila vazia!" << endl;
                        cout << "----------------------------------------------------" << endl;

                        break;
                    }

                    for (i = 0; i < fim; i++) {
                        valorPosterior = fila[i+1];
                        fila[i] = valorPosterior;
                    }

                    fim--;

                    cout << "\tElemento removido com sucesso!" << endl;
                    cout << "----------------------------------------------------" << endl;

                    cout << "Deseja remover mais elementos ? (S/N)" << endl;
                    cin >> opcaoSN;

                    opcaoSN = toupper(opcaoSN);

                    system("clear");

                } while(opcaoSN != 'N');

                system("pause");
                break;
            case 3:
                system("clear");

                cout << "----------------- IMPRIMINDO FILA -----------------" << endl;

                if (fim != 0) {

                    for (i = 0; i < fim; i++) {
                        cout << "\t\t  |\t" << fila[i] << "\t |" << endl;
                    }

                } else {
                    cout << "\tA fila está vazia!" << endl;
                }

                cout << "----------------------------------------------------" << endl;

                system("pause");
                break;
            case 9:
                system("clear");

                cout << "Saindo do sistema..." << endl;
                break;
            default:
                system("clear");
                cout << "Opcao invalida!" << endl;
                system("pause");

                break;
        }

    } while (opcao != 9);

    return 0;
}
