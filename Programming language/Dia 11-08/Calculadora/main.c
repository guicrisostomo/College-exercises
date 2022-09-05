#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, i;

    printf(" --------------------------Tabuada---------------------------\n");
    printf(" Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf(" Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf(" Digite o terceiro número inteiro: ");
    scanf("%d", &num3);
    printf(" Digite o quarto número inteiro: ");
    scanf("%d", &num4);

    printf(" -----------------------------------------------------------\n");

    printf("\n\t|  Tabuada do %d  |", num1);
    printf("\t|  Tabuada do %d  |", num3);

    for (i = 0; i < 11; i++) {

        printf("\n\t|%3d x %3d = %3d |\t|%3d x %3d = %3d |", num1, i, num1*i, num3, i, num3*i);

    }

    printf("\n\n\t|  Tabuada do %d  |", num2);
    printf("\t|  Tabuada do %d  |", num4);

    for (i = 0; i < 11; i++) {

        printf("\n\t|%3d x %3d = %3d |\t|%3d x %3d = %3d |", num2, i, num2*i, num4, i, num4*i);

    }

    printf("\n -----------------------------------------------------------\n");

    return 0;
}
