#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "Fila.cpp"

//  Implemente um programa que implemente uma fila de impressão.
//  Para cada arquivo a ser impresso devem ser armazenados:
//  - id sequencial da impressão (começando em 1)
//  - nome do arquivo
//  - quantidade de folhas
//  Exceto o id sequencial, as outras informações devem ser digitadas pelo
//  usuário. O programa também deve realizar um controle
//  da quantidade de papel disponível na impressora, permitindo que o usuário
//  realize a “inserção” de mais papel. Antes de inserir um novo documento na
//  fila, o programa deve verificar se há papel suficiente na impressora para
//  realizar a impressão. Se não houver papel suficiente, o programa não deve
//  aceitar a impressão. Desenvolva métodos que:
//    a.	Permita inserir um arquivo na fila de impressão (retornar falso caso não haja papel);
//    b.	Remova um arquivo da fila da impressão (imprimir);
//    c.	Liste os arquivos da fila de impressão;
//    d.	Permita inserir mais folhas na impressora;
//    e.	Retorne o total de folhas disponíveis na impressora

// Podem realizar testes inserindo valores pré definidos.
// Podem implementar um menu com as operações.
// Podem enviar ao pgrader para correção.

// Boa prova a todos!

int main() {

    int folhas = 10, id = 51;
    string arquivo = "fds";
    Fila filaTeste;
    filaTeste.inserirFolhas(1000);
    filaTeste.inserir(arquivo, folhas);
    arquivo = "2sdf";
    filaTeste.inserir(arquivo, folhas);
    filaTeste.inserir(arquivo, folhas);
    cout << filaTeste.listar() << endl;
    cout << "---------------------------" << endl;
    cout << filaTeste.listar() << endl;
    filaTeste.remover(id, arquivo, folhas);

    cout << filaTeste.remover(id, arquivo, folhas) << endl;
    cout << filaTeste.listar() << endl;
    cout << filaTeste.listarFolhas() << endl;
}
