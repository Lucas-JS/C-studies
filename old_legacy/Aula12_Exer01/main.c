#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    int idade;
    float salario;
    char nome[30];
} Pessoa;

void lerPessoa (Pessoa *p);
void escrevePessoa (Pessoa p);
void lerPessoa2 (Pessoa *p);
void lerVariasPessoas(Pessoa *p, int tam);
void escreveVariasPessoas(Pessoa pessoas[], int tam);

int main()
{
    Pessoa p;
    Pessoa pessoas[100];

     //lerPessoa(&p);
    //lerPessoa2(&p);
    //escrevePessoa(p);

    lerVariasPessoas(pessoas,3);
    escreveVariasPessoas(pessoas,3);


    return 0;
}

void lerPessoa(Pessoa *p)
{
    printf("\nDigite o nome da pessoa:");
    gets((*p).nome);
    printf("\nDigite a idade:");
    scanf("%d", &(*p).idade);
    printf("\nDigite o salario:");
    scanf("%f", &(*p).salario);
}

void escrevePessoa(Pessoa p)
{
    printf("\nNome da pessoa %s", p.nome);
    printf("\nIdade: %d", p.idade);
    printf("\nsalario: %.2f", p.salario);
}

void lerPessoa2 (Pessoa *p)
{
    printf("\nDigite o nome da pessoa:");
    gets(p->nome);
    printf("\nDigite a idade:");
    scanf("%d", &p->idade);
    printf("\nDigite o salario:");
    scanf("%f", &p->salario);
}

void lerVariasPessoas(Pessoa *p, int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("\nDigite o nome da pessoa:");
        gets(p->nome);
        printf("\nDigite a idade:");
        scanf("%d", &p->idade);
        printf("\nDigite o salario:");
        scanf("%f", &p->salario);
        p++;
        fflush(stdin);
    }
}

void escreveVariasPessoas(Pessoa pessoas[], int tam)
{
 int i;

 for(i=0; i < tam; i++)
 {
   printf("\nNome da pessoa %s", pessoas[i].nome);
   printf("\nIdade: %d", pessoas[i].idade);
   printf("\nsalario: %.2f", pessoas[i].salario);
 }
}
