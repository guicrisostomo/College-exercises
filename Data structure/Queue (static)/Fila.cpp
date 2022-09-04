#include <cstdlib>
#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    p->valor = x;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}


bool Fila::primeiro(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do primeiro elemento da lista
	// seu código aqui:
	if (vazia())
        return false;

    x = inicio->valor;
    return true;
}

bool Fila::ultimo(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do último elemento da lista
	// seu código aqui:

    if (vazia())
        return false;

    x = fim->valor;
    return true;

}

bool Fila::esvaziar() {
	// caso a lista esteja vazia retornar falso
	// remover todos os elementos da lista
	// seu código aqui:

	if (vazia())
        return false;

    int elementoRemovido;

    while(remover(elementoRemovido));

    return true;
}

int Fila::tamanho() {
	// retornar o tamanho da lista, 0 se estiver vazia
	// seu código aqui:
    if (vazia())
        return 0;

    int elementoManipulado, contador = 0;
    Fila filaAuxiliar;

    while(remover(elementoManipulado)) {
        contador++;
        filaAuxiliar.inserir(elementoManipulado);
    }

    while(filaAuxiliar.remover(elementoManipulado)) {
        inserir(elementoManipulado);
    }

    return contador;
}

bool Fila::inverter() {
	// caso a lista esteja vazia retornar falso
	// inverter a ordem dos elementos da lista
	// seu código aqui:
    if (vazia())
        return false;

    int tamanhoFila, elementoManipulado, i = 0;

    tamanhoFila = tamanho() - 1;

    int filaAuxiliar[tamanhoFila];

    if (vazia())
        return false;

    do {
        remover(elementoManipulado);
        filaAuxiliar[i] = elementoManipulado;
        i++;
    } while(i <= tamanhoFila);

    for (i = tamanhoFila; i >= 0; i--) {
        elementoManipulado = filaAuxiliar[i];
        inserir(elementoManipulado);
    }

    return true;
}

string Fila::listar() {
	// retornar string com todos os elementos da lista separados por ;
	// exemplo: 1 ; 3 ; 5
	// string vazia se a lista estiver vazia
	// seu código aqui:

    int elementoManipulado, inverterOrdem;
    string texto = "";
    Fila filaAuxiliar;

    while(remover(elementoManipulado)) {
        if (texto != "") {
            texto = texto + " ; " + to_string(elementoManipulado);
        } else {
            texto = to_string(elementoManipulado);
        }

        filaAuxiliar.inserir(elementoManipulado);
    }

    while(filaAuxiliar.remover(elementoManipulado)) {
        inserir(elementoManipulado);
    }

    return texto;
}

bool Fila::estaNaFila(int x) {
	// retornar verdadeiro caso o valor x seja localizado na fila
	// seu código aqui:

    if (vazia())
        return false;

    int elementoManipulado, i = 0;
    bool flag = false;

    Fila filaAuxiliar;

    while(remover(elementoManipulado)) {
        if (elementoManipulado == x) {
            flag = true;
        }

        filaAuxiliar.inserir(elementoManipulado);
    }

    while(filaAuxiliar.remover(elementoManipulado)) {
        inserir(elementoManipulado);
    }

    return flag;
}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersecção com a lista atual
	// elementos em comum com as 2 listas
	// sem repetição de elementos
	// seu código aqui:

    int tamanhoFila, elementoManipulado;

    tamanhoFila = tamanho() - 1;

    int filaAuxiliar[tamanhoFila], topoFilaAuxiliar = 0;
    Fila filaInterseccao;

    while(auxFila.remover(elementoManipulado)) {

        if (estaNaFila(elementoManipulado)) {

            filaAuxiliar[topoFilaAuxiliar] = elementoManipulado;

            topoFilaAuxiliar++;

            for (int i = 0; i < (topoFilaAuxiliar - 1); i++) {
                if (filaAuxiliar[i] == elementoManipulado) {
                    topoFilaAuxiliar--;
                }
            }

        }
    }

    for (int i = 0; i < topoFilaAuxiliar; i++) {
        filaInterseccao.inserir(filaAuxiliar[i]);
    }

    return filaInterseccao;
}

Fila Fila::uniao(Fila auxFila) {
	// retornar objeto Fila contendo a união com a lista atual
	// elementos das 2 listas
	// sem repetição de elementos
	// seu código aqui:

    int tamanhoFila, elementoManipulado;

    tamanhoFila = tamanho() - 1;

    int filaAuxiliar[tamanhoFila], topoFilaAuxiliar = 0;
    Fila filaUniao, filaAux1;

    while(remover(elementoManipulado)) {

        if (!estaNaFila(elementoManipulado)) {
            filaUniao.inserir(elementoManipulado);
        }

        filaAux1.inserir(elementoManipulado);
    }

    while(filaAux1.remover(elementoManipulado)) {
        inserir(elementoManipulado);
    }

    while(auxFila.remover(elementoManipulado)) {

        if (estaNaFila(elementoManipulado) == false) {
            filaUniao.inserir(elementoManipulado);
        }
    }

    return filaUniao;
}




