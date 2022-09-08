/*
Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas no seu quadro de funcionários, utilizando processamento eletrônico. 
Supondo que você seja o programador encarregado desse levantamento, fazer um algoritmo que:
•leia um conjunto de dados para cada candidato contendo: 
a)número de inscrição do candidato;
b)idade;
c)sexo (masculino, feminino);
d)experiência no serviço (sim ou não).
O último conjunto contém o número de inscrição do candidato igual a zero.
•calcule:
•o número de candidatos do sexo feminino;
•o número de candidatos do sexo masculino;
•idade média dos homens com mais de 45 anos entre o total de homens;
•número de mulheres que têm idade inferior a 35 anos e com experiência no serviço;
•a menor idade entre mulheres que já tem experiência no serviço;
•escreva:
a)o número de inscrição das mulheres pertencentes ao grupo descrito no item e; 
b)o que foi calculado em cada item acima especificado.
*/
#include <iostream>

using namespace std;

int main() {
  int numInscri, idade, numSexoF = 0, numMulher35 = 0, menorIdadeF = 0, numInscriMenor = 0, contaPessoa45 = 0;
  float idadeMedia45 = 0, numSexoM = 0;
  char sexo, experiencia;

  cout << "Para encerrar o loop, digite '0' no número de inscrição do candidato." << endl;

  do {
    cout << "Informe o número de inscrição do candidato (a): ";
    cin >> numInscri;

    if (numInscri == 0) {
      break;
    }

    cout << "Informe a idade: ";
    cin >> idade;
    cout << "Informe o sexo:" << endl;
    cout << "Sendo 'M' para 'Masculino' e 'F' para 'Feminino'" << endl;
    cin >> sexo;
    cout << "O candidato (a) tem experiência no serviço (S/N) ?" << endl;
    cin >> experiencia;

    if (sexo == 'F' || sexo == 'f') {
      numSexoF++;
      if (experiencia == 'S' || experiencia == 's') {
        if (idade < 35) {
          numMulher35++;
        }

        if (idade < menorIdadeF) {
          menorIdadeF = idade;
          numInscriMenor = numInscri;
        }
      }
    } else {
      if (sexo == 'M' || sexo == 'm') {
        numSexoM++;

        if (idade > 45) {
          contaPessoa45++;
          idadeMedia45 += idade;
        }
      }
    }
  } while (numInscri != 0);

  idadeMedia45 /= contaPessoa45;

  cout << "---------------------------------" << endl;
  cout << "Número de candidatos do sexo feminino: " << numSexoF << endl;
  cout << "Número de candidatos do sexo masculino: " << numSexoM << endl;
  cout << "Idade média dos homens com mais de 45 anos entre o total de homens: " << idadeMedia45 << endl;
  cout << "Número de mulheres com idade inferior a 35 anos e com experiência: " << numMulher35 << endl;
  cout << "Menor idade entre as mulheres e com experiência: " << menorIdadeF << endl;
  cout << "Menor idade entre as mulheres e com experiência (número de inscrição): " << numInscriMenor << endl;
  cout << "---------------------------------" << endl;

  return 0;
}