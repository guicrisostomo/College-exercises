#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
    contador = 0;
    folhasImpressora = 0;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(string arquivoParametro, int folhasParametro) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:

    if (folhasParametro > listarFolhas())
        return false;

    PonteiroElemento p;
    p = new elemento;
    p->folhas = folhasParametro;
    p->nomeArquivo = arquivoParametro;

    contador++;
    p->id = contador;

    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }

    p->proximoElemento = NULL;

    folhasImpressora = folhasImpressora - folhasParametro;

    return true;
}

bool Fila::remover(int &idParametro, string &arquivoParametro, int &folhasParametro) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    idParametro = inicio->id;
    arquivoParametro = inicio->nomeArquivo;
    folhasParametro = inicio->folhas;

    p = inicio;

    inicio = inicio->proximoElemento;

    contador--;

    delete p;
    if (inicio == NULL)
        fim = NULL;

    return true;
}

string Fila::listar() {
	// Implementar listagem da fila de impressão;
    // Retornar string no formato:
	// <idImpressao1> - <nomeArquivo1> - <folhas1>\n
	// <idImpressao2> - <nomeArquivo2> - <folhas2>\n
	//
	// Seu código aqui
    int idManipulado, folhasManipulado, folhasImpreAux;
    string texto = "", arquivoManipulado;
    Fila filaAuxiliar;

    PonteiroElemento p;

    p = inicio;

    for(int i = 0; p != NULL; i++) {
        idManipulado = p->id;
        folhasManipulado = p->folhas;
        arquivoManipulado = p->nomeArquivo;

        texto = texto + to_string(idManipulado) + " - " + arquivoManipulado + " - " + to_string(folhasManipulado) + "\n";

        p = p->proximoElemento;
    }

    return texto;
}

bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui
    folhasImpressora = folhasImpressora + auxFolhas;

    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui
    return folhasImpressora;
}
