// RA: 2840482111014
// Nome: Guilherme Crisostomo da Silva

#include <iostream>
#define M 10

using namespace std;

int main()
{
    int lista[M], listaCrescente[M], listaDecrescente[M], final, opcao, opcaoLista, elementoApagado, elementoRepetido, i, j, aux;

    final = 0;

    do {
        system("clear");

        cout << "----------------------- MENU -----------------------\n\n";
        cout << "\t1 - Push (inserir elemento na lista)" << endl;
        cout << "\t2 - Pop (remover elemento da lista)" << endl;
        cout << "\t3 - Imprimir lista" << endl;
        cout << "\t4 - Imprimir uma lista de ordem crescente" << endl;
        cout << "\t5 - Imprimir uma lista de ordem decrescente" << endl;
        cout << "\t9 - Sair\n\n";
        cout << "----------------------------------------------------\n\n";
        cout << "\tDigite o numero aqui: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            system("clear");

            cout << "-------------------- ADICIONANDO ELEMENTO NA FILA ---------------------" << endl;

            if (final == 0) {
                cout << "Informe o numero que deseja adicionar: ";
                cin >> lista[0];

                final++;
            }
            else {
                if (final < M) {

                    cout << "Informe a posicao que voce deseja inserir o novo numero" << endl;
                    cout << "Posicoes disponiveis:\n\n";

                    for (i = 0; i <= final; i++) {
                        cout << "\t|\t" << i + 1 << "\t|\n";
                    }

                    cout << "\nDigite a opcao aqui: ";
                    cin >> opcaoLista;

                    if (opcaoLista < 1 || opcaoLista >(final + 1)) {
                        system("clear");

                        cout << "Opcao invalida!" << endl;

                        system("pause");
                        break;
                    }

                    system("clear");

                    for (i = (final - 1); i >= (opcaoLista - 1); i--) {
                        lista[i + 1] = lista[i];
                    }

                    final++;

                    cout << "Digite o numero que deseja adicionar na posicao " << opcaoLista << ": ";
                    cin >> lista[opcaoLista - 1];

                }
                else {
                    cout << "A lista esta cheia!" << endl;
                }
            }

            cout << "-----------------------------------------------------------------------" << endl;
            cout << "Elemento adicionado com sucesso!" << endl;
            cout << "-----------------------------------------------------------------------" << endl;

            system("pause");
            break;
        case 2:
            system("clear");

            cout << "--------------- REMOVENDO ELEMENTO DA LISTA --------------" << endl;

            if (final == 0) {
                cout << "A lista esta vazia!" << endl;
            }
            else {
                cout << "Informe a posicao que voce deseja inserir o novo numero" << endl;
                cout << "Posicoes disponiveis:" << endl;

                cout << "\n\t|\tPosicao\t|\tValor\t|" << endl;

                for (i = 0; i < final; i++) {
                    cout << "\t|\t" << i + 1 << "\t|\t" << lista[i] << "\t|\n";
                }

                cout << "\nDigite a opcao aqui: ";
                cin >> opcaoLista;

                if (opcaoLista < 1 || opcaoLista > final) {
                    system("clear");

                    cout << "Opcao invalida!" << endl;

                    system("pause");
                    break;
                }

                opcaoLista--;

                for (i = opcaoLista; i < final; i++) {
                    lista[i] = lista[i + 1];
                }

                final--;

                cout << "----------------------------------------------------------" << endl;
                cout << "Elemento removido com sucesso!" << endl;
            }

            cout << "----------------------------------------------------------" << endl;

            system("pause");
            break;
        case 3:
            system("clear");

            cout << "----------------- IMPRIMINDO LISTA -----------------\n\n";

            if (final != 0) {

                cout << "\t---------------------------------";
                cout << "\n\t|\tPosicao\t|\tValor\t|" << endl;
                cout << "\t---------------------------------" << endl;

                for (i = 0; i < final; i++) {
                    cout << "\t|\t" << i + 1 << "\t|\t" << lista[i] << "\t|\n";
                }

                cout << "\t---------------------------------" << endl;

            }
            else {
                cout << "\tA lista esta vazia!" << endl;
            }

            cout << "\n----------------------------------------------------" << endl;

            system("pause");
            break;
        case 4:
            system("clear");

            cout << "------- IMPRIMINDO LISTA EM ORDEM CRESCENTE --------\n\n";

            if (final != 0) {

                cout << "\t---------------------------------";
                cout << "\n\t|\tPosicao\t|\tValor\t|" << endl;
                cout << "\t---------------------------------" << endl;

                for (i = 0; i < final; i++) {
                    listaCrescente[i] = lista[i];
                }

                for (i = 0; i < (final - 1); i++) {
                    for (j = (i + 1); j < final; j++) {
                        if ((listaCrescente[i] < listaCrescente[j])) {
                            elementoApagado = listaCrescente[i];
                            listaCrescente[i] = listaCrescente[j];
                            listaCrescente[j] = elementoApagado;
                        }
                    }
                }

                for (i = 0; i < final; i++) {
                    j = -1;
                    aux = 0;

                    if ((listaCrescente[i] == listaCrescente[i - 1]) && (i > 0)) {
                        elementoRepetido++;
                    }
                    else {
                        elementoRepetido = 0;
                    }

                    aux = elementoRepetido;

                    do {
                        j++;

                        if (listaCrescente[i] == lista[j]) {
                            aux--;
                        }

                    } while ((listaCrescente[i] != lista[j]) || ((listaCrescente[i] == lista[j]) && (aux >= 0)));

                    cout << "\t|\t" << (j + 1) << "\t|\t" << listaCrescente[i] << "\t|\n";
                }

                cout << "\t---------------------------------" << endl;

            }
            else {
                cout << "\tA lista esta vazia!" << endl;
            }

            cout << "\n----------------------------------------------------" << endl;

            system("pause");
            break;
        case 5:
            system("clear");

            cout << "------- IMPRIMINDO LISTA EM ORDEM DECRESCENTE -------\n\n";

            if (final != 0) {

                cout << "\t---------------------------------";
                cout << "\n\t|\tPosicao\t|\tValor\t|" << endl;
                cout << "\t---------------------------------" << endl;

                for (i = 0; i < final; i++) {
                    listaDecrescente[i] = lista[i];
                }

                for (i = 0; i < (final - 1); i++) {
                    for (j = (i + 1); j < final; j++) {
                        if ((listaDecrescente[i] > listaDecrescente[j])) {
                            elementoApagado = listaDecrescente[i];
                            listaDecrescente[i] = listaDecrescente[j];
                            listaDecrescente[j] = elementoApagado;
                        }
                    }
                }

                for (i = 0; i < final; i++) {
                    j = -1;
                    aux = 0;

                    if ((listaDecrescente[i] == listaDecrescente[i - 1]) && (i > 0)) {
                        elementoRepetido++;
                    }
                    else {
                        elementoRepetido = 0;
                    }

                    aux = elementoRepetido;
                    
                    do {
                        j++;

                        if (listaDecrescente[i] == lista[j]) {
                            aux--;
                        }

                    } while ((listaDecrescente[i] != lista[j]) || ((listaDecrescente[i] == lista[j]) && (aux >= 0)));

                    cout << "\t|\t" << (j + 1) << "\t|\t" << listaDecrescente[i] << "\t|\n";
                }

                cout << "\t---------------------------------" << endl;

            }
            else {
                cout << "\tA lista esta vazia!" << endl;
            }
            cout << "\n----------------------------------------------------" << endl;

            system("pause");
            break;
        case 9:
            system("clear");
            cout << "Saindo do sistema..." << endl;

            break;
        default:
            cout << "Opcao invalida!" << endl;

            system("pause");
            break;
        }

    } while (opcao != 9);

    return 0;
}