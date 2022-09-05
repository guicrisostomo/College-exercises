#include <iostream>
#include <string.h>

#define MAX 30

using namespace std;

typedef struct pilhas {
    char expressao[MAX];
    int pilha1[MAX];
    int topo;
} pilha;

void menu(int *opcao) {
    system("clear");

    cout << "----------------------- MENU -----------------------\n\n";
    cout << "\t1 - Digitar expressao matematica" << endl;
    cout << "\t2 - Visualizar resultado" << endl;
    cout << "\t9 - Sair\n\n";
    cout << "----------------------------------------------------\n\n";
    cout << "\tDigite o numero aqui: ";
    cin >> *opcao;
}

void criaExpressaoMatematica(pilhas *pilha) {
    system("clear");
    cout << "-------------------- NOVA EXPRESSAO MATEMATICA ---------------------" << endl;
    cout << "Digite a nova expressao matematica: ";
    cin >> pilha->expressao;
    cout << "--------------------------------------------------------------------" << endl;

    fflush(stdin);
}

int analisaExpressao(pilhas *pilha) {
    int i;

    system("clear");

    cout << "----------------- ANALISANDO EXPRESSAO MATEMATICA ------------------" << endl;

    pilha->topo = 0;

    for (i = 0; pilha->expressao[i] != '\0'; i++) {
        if (pilha->expressao[i] == '(') {
            pilha->topo += 1;
        } else {
            if (pilha->expressao[i] == ')') {
                if (pilha->topo > 0) {
                    pilha->topo -= 1;
                } else {
                    return 1;
                }
            }
        }
    }

    if (pilha->topo > 0) {
        return 2;
    }

    return 0;
}

int main()
{
    pilhas pilha;
    int opcao, flag, i;

    pilha.topo = 0;

    criaExpressaoMatematica(&pilha);
    flag = analisaExpressao(&pilha);

    if (flag == 0) {
        cout << "Todos os parentes foram abertos e fechados corretamente!" << endl;
    } else {
        if (flag == 1) {
            cout << "Existem parenteses fechados a mais!" << endl;
        } else {
            cout << "Existem 1 ou mais parenteses abertos!" << endl;
        }
    }

    cout << "--------------------------------------------------------------------" << endl;

    system("pause");

    do {
        menu(&opcao);

        switch (opcao) {
            case 1:
                criaExpressaoMatematica(&pilha);

                system("pause");
                break;
            case 2:
                flag = analisaExpressao(&pilha);

                if (flag == 0) {
                    cout << "Todos os parentes foram abertos e fechados corretamente!" << endl;
                } else {
                    if (flag == 1) {
                        cout << "Existem parenteses a mais!" << endl;
                    } else {
                        cout << "Existem 1 ou mais parenteses abertos!" << endl;
                    }
                }

                cout << "--------------------------------------------------------------------" << endl;

                system("pause");
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
