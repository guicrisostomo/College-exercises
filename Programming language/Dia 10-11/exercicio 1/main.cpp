#include <iostream>
#define MAX 10

using namespace std;

typedef struct structPilha {
    int dados[MAX];
    int topo;
} pilhas;

void menu(int *opcao) {
    cout << "----------------------- MENU -----------------------\n\n";
    cout << "\t1 - Push (inserir elemento na pilha)" << endl;
    cout << "\t2 - Pop (remover elemento da pilha)" << endl;
    cout << "\t3 - Imprimir pilha" << endl;
    cout << "\t9 - Sair\n\n";
    cout << "----------------------------------------------------\n\n";
    cout << "\tDigite o numero aqui: ";
    cin >> *opcao;
}

void push(char *opcaoSN) {
    cout << "-------------------- ADICIONANDO ELEMENTO NA PILHA ---------------------" << endl;

    if (pilha1.topo == MAX) {
        cout << "\n\tImpossivel adicionar elemento na pilha!\n\n";
        cout << "------------------------------------------------------------------------" << endl;
        system("pause");

        break;
    } else {
        cout << "\n\tInforme o numero que deseja inserir: ";
        cin >> pilha1.dados[pilha1.topo];
        pilha1.topo++;

        cout << "------------------------------------------------------------------------" << endl;
        cout << "\n\tElemento adicionado com sucesso!\n\n";
        cout << "------------------------------------------------------------------------" << endl;

        system("pause");
        system("clear");

        cout << "Deseja inserir um novo numero ?" << endl;
        cin >> *opcaoSN;
    }
}

void pop(char *opcaoSN) {
    cout << "----------- REMOVENDO ELEMENTO DA PILHA ------------" << endl;

    if (pilha1.topo == 0) {
        cout << "\n\tImpossivel remover elemento da pilha!\n\n";
        cout << "----------------------------------------------------" << endl;

        system("pause");
        break;
    } else {
        pilha1.topo--;

        cout << "\n\tElemento removido com sucesso!\n\n";
        cout << "----------------------------------------------------" << endl;
        system("pause");
        system("clear");

        cout << "Deseja remover outro elemento ?" << endl;
        cin >> *opcaoSN;
    }
}

void imprimeLista() {
    cout << "----------------- IMPRIMINDO LISTA -----------------\n\n";

    if (pilha1.topo == 0) {
        cout << "\tNao ha elementos na pilha!\n\n";
        cout << "----------------------------------------------------" << endl;

        system("pause");
        break;
    } else {
        for (i = (pilha1.topo - 1); i >= 0; i--) {
            cout << "\t\t|\t" << pilha1.dados[i] << "\t|\n";
        }

        cout << "\n----------------------------------------------------" << endl;

        system("pause");
    }
}

int main()
{
    int opcao, i;
    char opcaoSN;

    pilhas pilha1;
    pilha1.topo = 0;

    do {
        system("clear");

        menu(&opcao);

        switch(opcao) {
            case 1:
                do {
                    system("clear");

                    push(&opcaoSN, pi);


                } while(opcaoSN == 'S' || opcaoSN == 's');

                break;
            case 2:
                do {
                    system("clear");

                    pop(&opcaoSN);

                } while(opcaoSN == 'S' || opcaoSN == 's');

                break;
            case 3:
                system("clear");

                imprimeLista();

                break;
            case 9:
                system("clear");
                cout << "Saindo do sistema..." << endl;

                break;
            default:
                system("clear");
                cout << "Opcao invalida!\n\n";

                system("pause");
                break;
        }

    } while (opcao != 9);

    return 0;
}
