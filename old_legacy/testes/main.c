#include <stdio.h>
#include <stdlib.h>

void cabecalho(void);
typedef struct Funcionario
{
    int id;
    char nome [30];
} tFuncionario;

int main()
{
    void cabecalho()
    {
        printf("****************************************************************\n");
        printf("********************** Programa de testes **********************\n");
        printf("****************************************************************\n");
    }

    cabecalho();

    tFuncionario empresa[5];
    int i;

    for(i=0; i<5; i++)
    {

        printf("\nDigite o id do funcionario: ");
        scanf("%d", &(empresa[i].id));

        fflush(stdin);
        printf("\nDigite o nome do funcionario: ");
        gets(empresa[i].nome);
    }

    for(i=0; i<5; i++)
    {

        printf("\nNome: %s Id: %d ", empresa[i].nome, empresa[i].id);
    }

    return 0;
}

