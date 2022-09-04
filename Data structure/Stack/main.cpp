#include <iostream>
using namespace std;
#define MAX 5
#include "Pilha.cpp"

bool analisarPalindromo(char palavra[]) {
    int descobreTopo = -1;

    do {
        descobreTopo++;
    } while (palavra[descobreTopo] != '\0');

     for (int i = 0; i < descobreTopo; i++) {
        if (palavra[i] != palavra[descobreTopo - i - 1]) {
            cout << "Nao eh palindromo" << endl;
            return false;
        }
    }

    cout << "Eh palindromo" << endl;
    return true;
}

int main() {
    Pilha minhaPilha;
    int recebeValor;
    char palindromo[] = "esse";
    minhaPilha.empilhar(1);
    cout << minhaPilha.desempilhar(recebeValor) << endl;
    cout << "valor: " << recebeValor << endl;
    minhaPilha.empilhar(1);
    minhaPilha.empilhar(2);
    minhaPilha.empilhar(3);
    minhaPilha.empilhar(4);
    minhaPilha.empilhar(5);
    cout << "---------------" << endl;
    minhaPilha.menorValor();
    cout << "---------------" << endl;
    minhaPilha.maiorValor();
    cout << "---------------" << endl;
    minhaPilha.calcularMedia();
    cout << "---------------" << endl;
    minhaPilha.valoresImpares();
    cout << "---------------" << endl;
    minhaPilha.inverterOrdem();
    cout << "---------------" << endl;
    analisarPalindromo(palindromo);
}
