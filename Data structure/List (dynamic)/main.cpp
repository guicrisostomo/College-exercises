#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;


#include "Lista.cpp"

int main() {

    Lista minhaLista;
    int valor = 9, posicao = 2;

    minhaLista.inserir(1, 3);
    minhaLista.inserir(2, 6);
    minhaLista.inserir(3, 9);
    minhaLista.inserir(4, 12);
    cout << minhaLista.listar() << endl;
    cout << minhaLista.retornar(1, valor) << endl;
    cout << minhaLista.retornar(2, valor) << endl;
    cout << valor << endl;
    valor = 9;
    cout << minhaLista.localizar(posicao, valor) << endl;
    cout << posicao << endl;
    valor = 9;
    cout << minhaLista.localizarUltimo(posicao, valor) << endl;
    cout << posicao << endl;
    cout << minhaLista.tamanho() << endl;



    posicao = -5;
    valor = 10;
    cout << minhaLista.substituir(posicao, valor) << endl;
    cout << minhaLista.listar() << endl;
}
