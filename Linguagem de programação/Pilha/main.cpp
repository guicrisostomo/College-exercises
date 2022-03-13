#include <iostream>
#define MAX 10
using namespace std;

int main()
{
    int vetor[MAX], opcao, topo, i;
    char opcaoSN;

    topo = 0;

    do {
        system("clear");

        cout << "----------------------- MENU -----------------------\n\n";
        cout << "\t1 - Push (inserir elemento na pilha)" << endl;
        cout << "\t2 - Pop (remover elemento da pilha)" << endl;
        cout << "\t3 - Imprimir pilha" << endl;
        cout << "\t9 - Sair\n\n";
        cout << "----------------------------------------------------\n\n";
        cout << "\tDigite o numero aqui: ";
        cin >> opcao;

        system("clear");

        switch (opcao) {
            case 1:

                do {
                    system("clear");

                    cout << "-------------------- ADICIONANDO ELEMENTO NA PILHA ---------------------" << endl;

                    if (topo == MAX) {
                        cout << "\n\tImpossivel adicionar elemento na pilha!\n\n";
                        cout << "------------------------------------------------------------------------" << endl;

                        break;
                    }

                    cout << "\n\tInforme o numero inteiro que deseja adicionar: ";
                    cin >> vetor[topo];

                    topo++;

                    cout << "\n\tElemento adicionado com sucesso!\n\n";
                    cout << "------------------------------------------------------------------------" << endl;

                    cout << "Deseja adicionar mais algum elemento ? [S/N]" << endl;
                    cin >> opcaoSN;

                    opcaoSN = toupper(opcaoSN);

                } while (opcaoSN != 'N');

                system("pause");
                break;
            case 2:

                do {
                    system ("clear");

                    cout << "----------- REMOVENDO ELEMENTO DA PILHA ------------" << endl;

                    if (topo == 0) {
                        cout << "\n\tImpossivel remover elemento da pilha!\n\n";
                        cout << "----------------------------------------------------" << endl;

                        break;
                    }

                    topo--;

                    cout << "\n\tElemento removido com sucesso!\n\n";
                    cout << "----------------------------------------------------" << endl;

                    cout << "Deseja remover mais elementos ? [S/N]" << endl;
                    cin >> opcaoSN;

                    opcaoSN = toupper(opcaoSN);

                } while (opcaoSN != 'N');

                system("pause");
                break;
            case 3:
                cout << "----------------- IMPRIMINDO PILHA -----------------" << endl;

                if (topo == 0) {
                    cout << "\n\tNao ha itens na pilha!\n\n";
                    cout << "----------------------------------------------------" << endl;

                    system("pause");
                    break;
                }

                for(i = (topo - 1); i >= 0; i--)
                    cout << "\t\t  |\t" << vetor[i] << "\t |" << endl;

                cout << "----------------------------------------------------" << endl;

                system("pause");
                break;
            case 9:
                break;
            default:
                cout << "Opcao invalida!\n";
                system("pause");
                break;
        }
    } while (opcao != 9);

    return 0;
}
