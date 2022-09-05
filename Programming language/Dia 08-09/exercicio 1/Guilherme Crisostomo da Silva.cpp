#include <iostream>
#define MAX 4

using namespace std;

int main()
{
    int matriz[MAX][MAX], i, j, opcao, soma_diagonal_secundaria, soma_diagonal_principal, num_pares_diag_princ, num_pares_diag_secun, num_impar_diag_princ, num_impar_diag_secun, diferenca_diagonal;

    cout << "Informe os valores para carregar a matriz (4x4)" << endl;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << "Informe o " << i + 1 << "º linha e " << j + 1 << "º coluna da matriz: ";
            cin >> matriz[i][j];
        }
    }

    system("clear");

    num_impar_diag_princ = 0;
    num_impar_diag_secun = 0;
    num_pares_diag_princ = 0;
    num_pares_diag_secun = 0;
    soma_diagonal_principal = 0;
    soma_diagonal_secundaria = 0;

    for (i = 0; i < MAX; i++) {
        soma_diagonal_principal += matriz[i][i];

        if (matriz[i][i] % 2 == 0) {
            num_pares_diag_princ++;
        } else {
            num_impar_diag_princ += matriz[i][i];
        }
    }

    for (i = 0; i < MAX; i++) {
        soma_diagonal_secundaria += matriz[i][3-i];

        if (matriz[i][3-i] % 2 == 0) {
            num_pares_diag_secun++;
        } else {
            num_impar_diag_secun += matriz[i][3-i];
        }
    }

    diferenca_diagonal = soma_diagonal_principal - soma_diagonal_secundaria;

    cout << "\tMatriz informada:" << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << "|\t" << matriz[i][j] << "\t";
        }
        cout << "|" << endl;
    }

    cout << "---------------------------------RESULTADOS---------------------------------" << endl;


    cout << "Somatoria dos numeros impares da diagonal principal: " << num_impar_diag_princ << endl;
    cout << "Somatoria da diagonal principal: " << soma_diagonal_principal << endl;
    cout << "Quantidade de numeros pares na diagonal secundaria: " << num_pares_diag_secun << endl;
    cout << "Diferenca da somatoria da diagonal principal pela diagonal secundaria: " << diferenca_diagonal << endl;

    cout << "----------------------------------------------------------------------------" << endl;

    system("pause");
    system("clear");

    do {
        cout << "------------------------------------MENU------------------------------------" << endl;
        cout << "Escolha o que deseja fazer:" << endl;
        cout << "1 - Recarregar matriz com novos valores" << endl;
        cout << "2 - Mostrar matriz" << endl;
        cout << "3 - Somatória dos elementos da diagonal principal" << endl;
        cout << "4 - Somatória dos elementos da diagonal secundaria" << endl;
        cout << "5 - Somatória dos números ímpares da diagonal principal" << endl;
        cout << "6 - Somatória dos números ímpares da diagonal secundária" << endl;
        cout << "7 - Quantidade dos números pares da diagonal principal" << endl;
        cout << "8 - Quantidade dos números pares da diagonal secundária" << endl;
        cout << "9 - Diferenca da somatoria da diagonal principal pela diagonal secundaria" << endl;
        cout << "10 - Sair" << endl;
        cout << "----------------------------------------------------------------------------" << endl;

        do {
            cout << "Digite aqui a opcao: ";
            cin >> opcao;
        } while(opcao < 1 || opcao > 10);

        system("clear");

        if (opcao == 1) {
            cout << "----------------------------------------------------------------------------" << endl;
            cout << "Informe os novos valores para carregar a matriz (4x4)" << endl;

            for (i = 0; i < MAX; i++) {
                for (j = 0; j < MAX; j++) {
                    cout << "Informe o " << i + 1 << "º linha e " << j + 1 << "º coluna da matriz: ";
                    cin >> matriz[i][j];
                }
            }

            num_impar_diag_princ = 0;
            num_impar_diag_secun = 0;
            num_pares_diag_princ = 0;
            num_pares_diag_secun = 0;
            soma_diagonal_principal = 0;
            soma_diagonal_secundaria = 0;

            for (i = 0; i < MAX; i++) {
                soma_diagonal_principal += matriz[i][i];

                if (matriz[i][i] % 2 == 0) {
                    num_pares_diag_princ++;
                } else {
                    num_impar_diag_princ += matriz[i][i];
                }
            }

            for (i = 0; i < MAX; i++) {
                soma_diagonal_secundaria += matriz[i][3-i];

                if (matriz[i][3-i] % 2 == 0) {
                    num_pares_diag_secun++;
                } else {
                    num_impar_diag_secun += matriz[i][3-i];
                }
            }

            diferenca_diagonal = soma_diagonal_principal - soma_diagonal_secundaria;

            cout << "----------------------------------------------------------------------------" << endl;

            system("pause");
            system("clear");
        } else {
            if (opcao == 2) {
                cout << "\tMatriz informada:" << endl;
                cout << "----------------------------------------------------------------------------" << endl;

                for (i = 0; i < MAX; i++) {
                    for (j = 0; j < MAX; j++) {
                        cout << "|\t" << matriz[i][j] << "\t";
                    }
                    cout << "|" << endl;
                }

                cout << "----------------------------------------------------------------------------" << endl;

                system("pause");
                system("clear");

            } else {
                if (opcao == 3) {
                    cout << "----------------------------------------------------------------------------" << endl;
                    cout << "Somatória dos elementos da diagonal principal: " << soma_diagonal_principal << endl;
                    cout << "----------------------------------------------------------------------------" << endl;

                    system("pause");
                    system("clear");
                } else {
                    if (opcao == 4) {
                        cout << "----------------------------------------------------------------------------" << endl;
                        cout << "Somatória dos elementos da diagonal secundaria: " << soma_diagonal_secundaria << endl;
                        cout << "----------------------------------------------------------------------------" << endl;

                        system("pause");
                        system("clear");
                    } else {
                        if (opcao == 5) {
                            cout << "----------------------------------------------------------------------------" << endl;
                            cout << "Somatória dos números impares da diagonal principal: " << num_impar_diag_princ << endl;
                            cout << "----------------------------------------------------------------------------" << endl;

                            system("pause");
                            system("clear");
                        } else {
                            if (opcao == 6) {
                                cout << "----------------------------------------------------------------------------" << endl;
                                cout << "Somatória dos números impares da diagonal secundaria: " << num_impar_diag_secun << endl;
                                cout << "----------------------------------------------------------------------------" << endl;

                                system("pause");
                                system("clear");
                            } else {
                                if (opcao == 7) {
                                    cout << "----------------------------------------------------------------------------" << endl;
                                    cout << "Quantidade dos números pares da diagonal principal: " << num_pares_diag_princ << endl;
                                    cout << "----------------------------------------------------------------------------" << endl;

                                    system("pause");
                                    system("clear");
                                } else {
                                    if (opcao == 8) {
                                        cout << "----------------------------------------------------------------------------" << endl;
                                        cout << "Quantidade dos números pares da diagonal secundaria: " << num_pares_diag_secun << endl;
                                        cout << "----------------------------------------------------------------------------" << endl;

                                        system("pause");
                                        system("clear");
                                    } else {
                                        if (opcao == 9) {
                                            cout << "----------------------------------------------------------------------------" << endl;
                                            cout << "Diferenca da somatoria da diagonal principal pela diagonal secundaria: " << diferenca_diagonal << endl;
                                            cout << "----------------------------------------------------------------------------" << endl;

                                            system("pause");
                                            system("clear");
                                        } else {
                                            if (opcao == 10) {
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    } while (opcao != 10);

    return 0;
}
