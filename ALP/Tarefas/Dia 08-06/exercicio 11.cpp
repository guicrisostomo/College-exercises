/*
Uma universidade deseja fazer um levantamento a respeito do seu concurso vestibular. Para cada curso, é fornecido o seguinte conjunto de valores:
•o código do curso;
•o número de vagas;
•número de candidatos do sexo masculino;
•número de candidatos do sexo feminino;
O último conjunto, para indicar fim de dados, contém o código do curso igual a zero. Fazer um algoritmo que:
•calcule escreva, para cada curso, o número de candidatos por vaga e a porcentagem de candidatos do sexo feminino (escreva também o código correspondente do curso);
•determine o maior número de candidatos por vaga e escreva esse número juntamente com o código do curso correspondente (supor que não haja empate);
•calcule e escreva o total de candidatos;
*/
#include <iostream>

using namespace std;

int main() {
  int codigo = 0, totalCand = 0;
  float numVaga = 0, sexMasc = 0, sexFem = 0, cand = 0, CV = 0, maiorCV = 0, maiorCVCod = 0, porcenFem = 0;

  do {
    cout << "Código do curso: ";
    cin >> codigo;

    if (codigo == 0) {
      break;
    }

    cout << "Número de vagas: ";
    cin >> numVaga;
    cout << "Número de candidatos do sexo masculino: ";
    cin >> sexMasc;
    cout << "Número de candidatos do sexo feminino: ";
    cin >> sexFem;

    cand = sexMasc + sexFem;
    totalCand += cand;
    CV = cand / numVaga;
    porcenFem = (sexFem / cand) * 100;

    if (maiorCV < CV) {
      maiorCV = CV;
      maiorCVCod = codigo;
    }

    cout << "----------------------------------------------------------" << endl;
    cout << "Código do curso: " << codigo << endl;
    cout << "\tNúmero de candidatos por vaga: " << CV << endl;
    cout << "\tPorcentagem de candidatos do sexo feminino: " << porcenFem << "%" << endl;
    cout << "----------------------------------------------------------" << endl;
  } while (codigo != 0);

  cout << "----------------------------------------------------------" << endl;
  cout << "Código do curso com maior número de candidatos por vaga: " << maiorCVCod << endl;
  cout << "Maior número de candidatos por vaga: " << maiorCV << endl;
  cout << "Total de candidatos: " << totalCand << endl;
  cout << "----------------------------------------------------------" << endl;

  return 0;
}