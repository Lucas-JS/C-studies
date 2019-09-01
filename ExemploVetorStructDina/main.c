#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    char nome[30];
    int idade;
    float salario;
} tPessoa;


int main()
{
    int i;
    tPessoa *v = malloc (3 * sizeof(tPessoa));
    tPessoa *atual;

    if( v ==NULL )
    {
        printf("\nErro ao alocar o vetor");
    }
    else
    {

        //leitura
        atual = v;
        for(i = 0; i < 3; i++)
        {
            printf("\nDigite nome da pessoa:");
            scanf("%s", atual->nome);
            printf("\nDigite a idade da pessoa:");
            scanf("%d", &atual->idade);
            printf("\nDigite o salario da pessoa:");
            scanf("%f", &atual->salario);
            atual++;
        }

        //escrita
        atual = v;
        for(i = 0; i < 3; i++)
        {
            printf("\nNome:%s", atual->nome);
            printf("\nIdade: %d", atual->idade);
            printf("\nSalario: %f", atual->salario);
            atual++;
        }
    }
        return 0;
    }
