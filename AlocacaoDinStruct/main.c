#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct Pessoa {
  char nome[30];
  int idade;
  float salario;
} tPessoa;

int main()
{

    tPessoa *p1 = malloc (sizeof(tPessoa));

    p1->idade = 10;
    p1->salario = 500;
    strcpy(p1->nome,"Jose");

    printf("\nNome:%s", p1->nome);
    printf("\nIdade: %d", p1->idade);
    printf("\nSalario: %f", p1->salario);

    //leitura
    printf("\nDigite nome da pessoa:");
    scanf("%s", p1->nome);
    printf("\nDigite a idade da pessoa:");
    scanf("%d", &p1->idade);
    printf("\nDigite o salario da pessoa:");
    scanf("%f", &p1->salario);


    printf("\nNome:%s", p1->nome);
    printf("\nIdade: %d", p1->idade);
    printf("\nSalario: %f", p1->salario);
    return 0;
}
