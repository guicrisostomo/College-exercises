/*
O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
•durante o semestre são dadas três notas;
•a nota final é obtida pela média aritmética das notas dadas durante o curso;
•é considerado aprovado o aluno que obtiver a nota final superior ou igual a 60 e que tiver comparecido a um mínimo de 40 aulas. Fazer um algoritmo que:
a)Leia um conjunto de dados contendo o número de matrícula, as três notas e a frequência (número de aulas frequentadas) de 100 alunos.
b)Calcule:
1.a nota final de cada aluno;
2.a maior e menor nota da turma;
3.a nota média da turma;
4.o total de alunos reprovados;
5.a porcentagem de alunos reprovados por infrequência; 
c)Escreva:
•para cada aluno, o número de matrícula, a frequência, a nota final e o código (aprovado ou reprovado);
•o que foi calculado no item b (2,3,4 e 5).
*/
#include <iostream>

using namespace std;

int main() {
  float nota1, nota2, nota3, notaFinal, frequencia, numMatricula, maiorNota = 0, menorNota = 0, mediaTurma = 0, reproFrequencia = 0, i = 0;
  int numAlunoApro = 0, totalAlunosRepro = 0;

  do {
    i++;

    cout << "Informe número de matrícula do aluno: ";
    cin >> numMatricula;
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    cout << "Informe a frequência do aluno: ";
    cin >> frequencia;

    notaFinal = (nota1 + nota2 + nota3) / 3;
    mediaTurma += notaFinal;
    
    if (i == 1) {
      menorNota = notaFinal;
      maiorNota = notaFinal;
    }
    if (notaFinal < menorNota) {
      menorNota = notaFinal;
    }
    if (notaFinal > maiorNota) {
      maiorNota = notaFinal;
    }

    cout << "---------------------------------------------------" << endl;
    cout << "Número da matrícula: " << numMatricula << endl;
    cout << "\tFrequência: " << frequencia << endl;
    cout << "\tNota final: " << notaFinal << endl;
    if (notaFinal >= 60 && frequencia >= 40) {
      cout << "\tO aluno foi aprovado!" << endl;
    } else {
      totalAlunosRepro++;
      if (frequencia < 40) {
        reproFrequencia++;
      }
      cout << "\tO aluno foi reprovado!" << endl;
    }
    cout << "---------------------------------------------------" << endl;
  } while (i < 200);

  reproFrequencia = (reproFrequencia / totalAlunosRepro) * 100;

  cout << "---------------------------------------------------" << endl;
  cout << "Menor nota da turma: " << menorNota << endl;
  cout << "Maior nota da turma: " << maiorNota << endl;
  cout << "Total de reprovados: " << totalAlunosRepro << endl;
  cout << "Porcentagem de alunos reprovados por frequência: " << reproFrequencia << "%" << endl;
  cout << "---------------------------------------------------" << endl;

  return 0;
}