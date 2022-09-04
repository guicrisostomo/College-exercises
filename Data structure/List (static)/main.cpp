#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#define MAX 5

#include "Lista.cpp"

int main() {

    Lista minhaLista;
    int xa;
    minhaLista.inserir(1, 1);
    minhaLista.inserir(2, 2);
    minhaLista.inserir(3, 3);
    minhaLista.inserir(4, 4);
    cout << minhaLista.retornar(5, xa);
    cout << minhaLista.substituir(5, 10);
    cout << minhaLista.listar() << endl;
    cout << xa << endl;
    cout << "\n";
}
