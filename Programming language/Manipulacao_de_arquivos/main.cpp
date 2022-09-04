#include <iostream>
#include <string.h>
#define M 1000

using namespace std;

int lerArquivo(char text[M]) {
    int i = 0;

    FILE *arquivo_leitura;

    //abre arquivo texto.txt
    arquivo_leitura = fopen("texto.txt","r");

    if (arquivo_leitura == NULL) {
        cout << "Ocorreu um problema ao acessar o arquivo!" << endl;
        return 1;
    }

    //le caracter por caracter
    for (i=0;!feof(arquivo_leitura);i++) {
        text[i]=fgetc(arquivo_leitura);

        //verifica se o elemento eh um lixo de memoria
        if (text[i] == 'ÿ') {
            //se for, marca com \0 para delimitar fim do vetor de char
            text[i] = '\0';

            //fecha o arquivo e sai da funcao
            fclose(arquivo_leitura);
            return 0;
        }
    }

    fclose(arquivo_leitura);

    return 0;
}

int criptografaTexto(char text[M]) {
    FILE *arquivo_criptografa;
    int i, verificacao;

    i = 0;
    verificacao = 0;

    //abre arquivo texto.txt
    arquivo_criptografa = fopen("texto.txt", "w");

    if (arquivo_criptografa == NULL) {
        cout << "Ocorreu um problema ao acessar o arquivo!" << endl;
        //retorna 1 para sinalizar que houve um problema no arquivo
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++) {
        //inicializa variavel a cada loop
        verificacao = 0;


        //verifica se o proximo elemento sera um caracter especial
        if (text[i] != 'x' && text[i] != 'X' && text[i] != 'y' && text[i] != 'Y' && text[i] != 'z' && text[i] != 'Z' && text[i] != ' ') {
            //se nao for, soma 3 caracteres
            text[i] = text[i] + 3;

            //usado para verificar se o elemento ja foi alterado
            verificacao = 1;
        }

        //verifica se o elemento ainda nao foi alterado
        if (verificacao == 0) {

            //"pula" caracter especial e altera de tamanho (de minusculo para maiusculo ou vice versa)
            if (text[i] == 'x') {
                text[i] = 'A';
            } else {
                if (text[i] == 'X') {
                    text[i] = 'a';
                }
            }

            if (text[i] == 'y') {
                text[i] = 'B';
            } else {
                if (text[i] == 'Y') {
                    text[i] = 'b';
                }
            }

            if (text[i] == 'z') {
                text[i] = 'C';
            } else {
                if (text[i] == 'Z') {
                    text[i] = 'c';
                }
            }

            //para espaco, ao criptografar, continua espaco
            if (text[i] == ' ') {
                text[i] = ' ';
            }
        }
    }

    //altera arquivo
    fprintf(arquivo_criptografa,text);

    cout << "\tTexto criptografado: " << text << "\n";

    //fecha o arquivo
    fclose(arquivo_criptografa);

    return 0;
}

int descriptografaTexto(char text[M]) {
    FILE *arquivo_descriptografa;
    int i, verificacao;

    i = 0;
    verificacao = 0;

    //abre arquivo texto.txt
    arquivo_descriptografa = fopen("texto.txt", "w");

    if (arquivo_descriptografa == NULL) {
        cout << "Ocorreu um problema ao acessar o arquivo!" << endl;
        //retorna 1 para sinalizar que houve um problema no arquivo
        return 1;
    }

    for (i = 0; text[i] != '\0'; i++) {
        //inicializa variavel a cada loop
        verificacao = 0;


        //verifica se o proximo elemento sera um caracter especial
        if (text[i] != 'a' && text[i] != 'A' && text[i] != 'b' && text[i] != 'B' && text[i] != 'c' && text[i] != 'C' && text[i] != ' ') {
            //se nao for, soma 3 caracteres
            text[i] = text[i] - 3;

            //usado para verificar se o elemento ja foi alterado
            verificacao = 1;
        }

        //verifica se o elemento ainda nao foi alterado
        if (verificacao == 0) {

            //"pula" caracter especial e altera de tamanho (de minusculo para maiusculo ou vice versa)
            if (text[i] == 'a') {
                text[i] = 'X';
            } else {
                if (text[i] == 'A') {
                    text[i] = 'x';
                }
            }

            if (text[i] == 'b') {
                text[i] = 'Y';
            } else {
                if (text[i] == 'B') {
                    text[i] = 'y';
                }
            }

            if (text[i] == 'c') {
                text[i] = 'Z';
            } else {
                if (text[i] == 'C') {
                    text[i] = 'z';
                }
            }

            //para espaco, ao criptografar, continua espaco
            if (text[i] == ' ') {
                text[i] = ' ';
            }
        }
    }

    //altera arquivo
    fprintf(arquivo_descriptografa,text);

    cout << "\tTexto descriptografado: " << text << "\n";

    //fecha o arquivo
    fclose(arquivo_descriptografa);

    return 0;
}

int main() {

    int i, opcao, flag;
    char texto[M];

    flag = 0;
    i = 0;

    do {
        system("clear");

        cout << "----------------------- MENU -----------------------\n\n";
        cout << "\t1 - Criptografar texto" << endl;
        cout << "\t2 - Descriptografar texto" << endl;
        cout << "\t3 - Mostrar texto" << endl;
        cout << "\t9 - Sair\n\n";
        cout << "----------------------------------------------------\n\n";
        cout << "\tDigite o numero aqui: ";
        cin >> opcao;


        switch (opcao) {
            case 1:
                system("clear");

                cout << "----------------- CRIPTOGRANDO TEXTO -----------------\n\n";

                flag = lerArquivo(texto);

                if (flag == 1) {
                    return 0;
                }

                flag = criptografaTexto(texto);

                if (flag == 1) {
                    return 0;
                }

                cout << "\n------------------------------------------------------\n";
                system("pause");
                break;
            case 2:
                system("clear");

                cout << "--------------- DESCRIPTOGRANDO TEXTO ----------------\n\n";

                flag = lerArquivo(texto);

                if (flag == 1) {
                    return 0;
                }

                flag = descriptografaTexto(texto);

                if (flag == 1) {
                    return 0;
                }

                cout << "\n------------------------------------------------------\n";
                system("pause");
                break;
            case 3:
                system("clear");

                cout << "----------------------- TEXTO ------------------------\n\n";

                flag = lerArquivo(texto);

                if (flag == 1) {
                    return 0;
                }

                cout << "\tTexto simples: " << texto << "\n";

                cout << "\n------------------------------------------------------\n";
                system("pause");
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
