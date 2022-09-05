#include <iostream>
#define M 10
using namespace std;

int main()
{
    int pilha[M], fila[M], topo, final, opcao, i;

    //inicializa variaveis
    topo = 0;
    final = 0;

    //repete até que o usuario digite a opção 9
    do {
        //limpa a tela
        system("clear");

        cout << "----------------------- MENU -----------------------\n\n";
        cout << "\t1 - Push (inserir elemento na pilha)" << endl;
        cout << "\t2 - Pop (remover elemento da pilha)" << endl;
        cout << "\t3 - Inverter pilha" << endl;
        cout << "\t4 - Mostrar pilha" << endl;
        cout << "\t9 - Sair\n\n";
        cout << "----------------------------------------------------\n\n";
        cout << "\tDigite o numero aqui: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                //limpa a tela
                system("clear");

                cout << "-------------------- ADICIONANDO ELEMENTO NA PILHA ---------------------" << endl;

                //verifica se a pilha está cheia
                if (topo == M) {
                    cout << "\n\tImpossivel adicionar elemento na pilha!\n\n";
                    cout << "------------------------------------------------------------------------" << endl;

                    //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                    system("pause");
                    //sai do switch
                    break;
                }

                cout << "\n\tInforme o numero inteiro que deseja adicionar: ";

                //adiciona elemento
                cin >> pilha[topo];
                topo++;


                cout << "\n\tElemento adicionado com sucesso!\n\n";
                cout << "------------------------------------------------------------------------" << endl;

                //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                system("pause");
                //sai do switch
                break;
            case 2:
                //limpa a tela
                system ("clear");

                cout << "----------- REMOVENDO ELEMENTO DA PILHA ------------" << endl;

                //verifica se a pilha está vazia
                if (topo == 0) {
                    cout << "\n\tImpossivel remover elemento da pilha!\n\n";
                    cout << "----------------------------------------------------" << endl;

                    //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                    system("pause");
                    //sai do switch
                    break;
                }

                //remove elemento
                topo--;

                cout << "\n\tElemento removido com sucesso!\n\n";
                cout << "----------------------------------------------------" << endl;

                //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                system("pause");
                //sai do switch
                break;
            case 3:
                //limpa a tela
                system ("clear");

                cout << "----------------- INVERTENDO PILHA -----------------" << endl;

                //verifica se a pilha está vazia
                if (topo == 0) {
                    cout << "\n\tNao ha itens na pilha!\n\n";
                    cout << "----------------------------------------------------" << endl;

                    //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                    system("pause");
                    //sai do switch
                    break;
                }

                //corrige o topo, pois, se não fizer isso, pegará lixo da memória
                topo--;

                //esvazia a pilha

                //retira o elemento da pilha e coloca na fila (subtraindo a variavel final e somando a variavel topo)
                for (final = 0; topo >= 0; topo--, final++)
                    fila[final] = pilha[topo];

                //esvazia a fila

                //aqui faz o processo inverso, coloca elemento na pilha e retira da lista (somando a variavel final e subtraindo a variavel topo)
                for (topo = 0; final > 0; topo++, final--)
                    pilha[topo] = fila[topo];

                cout << "\n\tPilha invertida com sucesso!\n\n";
                cout << "----------------------------------------------------" << endl;

                //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                system("pause");
                //sai do switch
                break;
            case 4:
                //limpa a tela
                system ("clear");

                cout << "----------------- IMPRIMINDO PILHA -----------------\n\n";

                //verifica se não ha itens para impressão

                if (topo == 0) {
                    cout << "\tNao ha itens na pilha!\n\n";
                    cout << "----------------------------------------------------" << endl;

                    system("pause");
                    break;
                }

                //pega elementos do final do vetor e imprimi (faz uma impressão do final para o inicio)
                for(i = (topo - 1); i >= 0; i--)
                    cout << "\t\t  |\t" << pilha[i] << "\t |" << endl;

                cout << "\n----------------------------------------------------" << endl;

                //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                system("pause");
                //sai do switch
                break;
            case 9:
                //limpa a tela
                system("clear");

                cout << "Saindo do sistema..." << endl;
                //sai do switch
                break;
            default:
                //caso o usuario digite uma opção inválida

                cout << "\n----------------------------------------------------" << endl;
                cout << "\n\tOpcao invalida!\n\n";
                cout << "----------------------------------------------------" << endl;

                //pausa o sistema e o mesmo só voltará caso o usuario toque em alguma tela
                system("pause");
                //sai do switch
                break;
        }

    } while (opcao != 9);

    return 0;
}
