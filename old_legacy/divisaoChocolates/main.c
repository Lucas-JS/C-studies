#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ESSE ALGORITMO CONTEM ERROS DE LOGICA E SINTAXE*/

    int qtdChoco;
    int qtdAlunos;
    int divisao;
    int resto;

    printf("Digite a quantidade de chocolates:\n");
    scanf("%f", &qtdChoco);

    printf("Digite a quantidade de alunos:\n");
    scanf ("%f", &qtdAlunos);

    divisao = qtdChoco / qtdAlunos;
    resto = qtdChoco % qtdAlunos;

    printf("quantide de chocalate pra cada aluno = %i\n", divisao);

    printf("resto da divisao = %i", resto);

    return 0;
}
