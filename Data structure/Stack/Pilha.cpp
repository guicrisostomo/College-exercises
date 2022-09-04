#include <iostream>
#include "Pilha.h"
using namespace std;

Pilha::Pilha() {
    contador = 0;
    capacidade = MAX;
}

bool Pilha::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::empilhar(int valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::desempilhar(int &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool Pilha::retornaTopo(int &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}

void Pilha::valoresImpares() {

    for (int i = 0; i < contador; i++) {
        if (conteudo[i] % 2 == 1) {
            cout << conteudo[i] << endl;
        }
    }
}

float Pilha::calcularMedia() {
    float mediaValorVariavel = 0;

    for (int i = 0; i < contador; i++) {
        mediaValorVariavel = mediaValorVariavel + conteudo[i];
    }

    mediaValorVariavel = mediaValorVariavel/contador;

    cout << mediaValorVariavel << endl;
    return mediaValorVariavel;
}

int Pilha::maiorValor() {
    int maiorValorVariavel;

    for (int i = 0; i < contador; i++) {
        if (i == 0) {
            maiorValorVariavel = conteudo[i];
        } else {
            if (maiorValorVariavel < conteudo[i]) {
                maiorValorVariavel = conteudo[i];
            }
        }
    }

    cout << maiorValorVariavel << endl;

    return maiorValorVariavel;
}

int Pilha::menorValor() {
    int menorValorVariavel;

    for (int i = 0; i < contador; i++) {
        if (i == 0) {
            menorValorVariavel = conteudo[i];
        } else {
            if (menorValorVariavel > conteudo[i]) {
                menorValorVariavel = conteudo[i];
            }
        }
    }

    cout << menorValorVariavel << endl;

    return menorValorVariavel;
}

void Pilha::inverterOrdem() {
    int novoArray[MAX];

    for (int i = 0; i < contador; i++) {
        novoArray[i] = conteudo[MAX - i - 1];
    }

    for (int i = 0; i < contador; i++) {
        conteudo[i] = novoArray[i];
        cout << conteudo[i] << endl;
    }
}
