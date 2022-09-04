#define M 5
// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado


// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico

struct calculo {
    int a;
    char operacao;
    int b;
    int resultado;
};

calculo historico[M];
int finalStruct = 0;


void apagaUltimoLista() {
    char substituoOperacoes;

    for (int i = 0; i < (finalStruct - 1); i++) {
        historico[i].a = historico[i + 1].a;
        historico[i].b = historico[i + 1].b;
        historico[i].resultado = historico[i + 1].resultado;
        historico[i].operacao = historico[i + 1].operacao;
    }

    historico[M - 1].a = 0;
    historico[M - 1].b = 0;
    historico[M - 1].resultado = 0;
    historico[M - 1].operacao = '\0';

    finalStruct--;
}

void salvaHistorico(char operadorParam, int valor1, int valor2, int resultadoParam) {
    if (finalStruct == M) {
        apagaUltimoLista();
    }

    historico[finalStruct].a = valor1;
    historico[finalStruct].operacao = operadorParam;
    historico[finalStruct].b = valor2;
    historico[finalStruct].resultado = resultadoParam;

    finalStruct++;
}

// Implemente a função soma:
int soma(int a, int b) {
    // Seu código aqui:
    system("clear");

    int resultadoOperacao = a + b;

    cout << "-----------------ADICAO----------------\n";

    salvaHistorico('+', a, b, resultadoOperacao);

    return resultadoOperacao;
}

// Implemente a função subtracao:
int subtracao(int a, int b) {
    // Seu código aqui:
    system("clear");

    int resultadoOperacao = a - b;

    cout << "---------------SUBTRACAO---------------\n";

    salvaHistorico('-', a, b, resultadoOperacao);

    return resultadoOperacao;


}

// Implemente a função multiplicacao:
int multiplicacao(int a, int b) {
    // Seu código aqui:
    system("clear");

    int resultadoOperacao = a * b;

    cout << "-------------MULTIPLICACAO-------------\n";

    salvaHistorico('*', a, b, resultadoOperacao);

    return resultadoOperacao;

}

// Implemente a função divisao:
int divisao(int a, int b) {
    // Seu código aqui:
    system("clear");

    cout << "----------------DIVISAO----------------\n";

    if (b == 0) {
        cout << "Erro ao dividir por 0!" << endl;
        return 0;
    }

    int resultadoOperacao = a / b;

    salvaHistorico('/', a, b, resultadoOperacao);

    return resultadoOperacao;

}


// Implemente a função limpaHistorico:
int limpaHistorico() {
    // Seu código aqui:
    system("clear");

    if (finalStruct == 0) {
        return 1;
    }

    cout << "----------APAGANDO HISTORICO-----------\n";

    for (int i = 0; i < finalStruct; i++) {
        historico[i].a = 0;
        historico[i].b = 0;
        historico[i].resultado = 0;
        historico[i].operacao = '\0';
    }

    finalStruct = 0;

    return finalStruct;
}

// Implemente a função listaHistorico:
string listaHistorico()
{
    // Seu código aqui:
    system("clear");

    string texto;
    if (finalStruct == 0) {
        texto = "Historico esta vazio!\n";
        return texto;
    }

    string textoOperacao, textoA, textoB, textoResultado;

    texto = "---------------HISTORICO---------------\n";

    for (int i = 0; i < finalStruct; i++) {
        textoA = to_string(historico[i].a);
        textoB = to_string(historico[i].b);
        textoResultado = to_string(historico[i].resultado);
        textoOperacao = historico[i].operacao;

        
        texto += "Primeiro valor: " + textoA + "\n";
        texto += "Segundo valor: " + textoB + "\n";
        texto += "Resultado: " + textoResultado + "\n";
        texto += "Operacao: " + textoOperacao + "\n";
        texto += "---------------------------------------\n";
    }

    return texto;
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao) {
    // Seu código aqui:
    string textoHistorico;

    do {
        switch (operacao) {
        case '+':
            cout << "Resultado da soma: " << soma(a, b) << endl;
            cout << "---------------------------------------" << endl;

            break;
        case '-':
            cout << "Resultado da subtracao: " << subtracao(a, b) << endl;
            cout << "---------------------------------------" << endl;

            break;
        case '*':
            cout << "Resultado da multiplicacao: " << multiplicacao(a, b) << endl;
            cout << "---------------------------------------" << endl;

            break;
        case '/':
            cout << "Resultado da divisao: " << divisao(a, b) << endl;
            cout << "---------------------------------------" << endl;

            break;
        case 'a':
            if (limpaHistorico() == 0) {
                cout << "Historico apagado com sucesso!" << endl;
            }
            else {
                cout << "Historico esta vazio!" << endl;
            }

            cout << "------------------------------------\n";

            break;
        case 'h':
            textoHistorico = listaHistorico();
            cout << textoHistorico;
            break;
        case 's':
            cout << "Saindo do sistema..." << endl;
            return 0;
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }

        system("pause");

        system("clear");

        cout << "-------------CALCULADORA-------------" << endl;

        cout << "Informe a operacao desejada:" << endl;
        cout << "(+) Para soma" << endl;
        cout << "(-) Para subtracao" << endl;
        cout << "(*) Para multiplicao" << endl;
        cout << "(/) Para divisao" << endl;
        cout << "(h) Para listar historico" << endl;
        cout << "(a) Para apagar historico" << endl;
        cout << "(s) Para sair" << endl;
        cin >> operacao;

        if (operacao != 'h' && operacao != 'a' && operacao != 's') {
            cout << "Informe o primeiro valor: ";
            cin >> a;

            cout << "Informe o segundo valor: ";
            cin >> b;
        }

    } while (operacao != 's');

    return 0;
}