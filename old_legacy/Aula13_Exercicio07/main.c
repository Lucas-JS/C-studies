#include <stdio.h>
#include <stdlib.h>
#define TAM 50

typedef struct cc {
 int cpf;
 float saldo;
} ContaCorrente;

void atualizaCC(ContaCorrente *c, int cpf, char op, float valor, int *totalCC);

int main()
{
    FILE *arquivo;
    float valor;
    char operacao;
    int i, cpf;
    ContaCorrente contas[TAM];
    int totalCC = 0;

    arquivo = fopen("cc.txt", "w+");

    if(arquivo == NULL)
    {
      printf("\n***Erro ao abrir o arquivo");
    }
    else
    {
     for(i=0; i<3; i++)
     {
      fflush(stdin);
      printf("\nDigite o CPF do clilente:");
      scanf("%d", &cpf);
      fflush(stdin);
      printf("\nDigite operacao - c ou d:");
      scanf("%c", &operacao);
      printf("\nDigite valor da operacao:");
      scanf("%f", &valor);
      fprintf(arquivo, "%d %c %f\n",cpf, operacao, valor);
     }
    }

     rewind(arquivo);

     while (fscanf(arquivo, "%d %c %f", &cpf,  &operacao, &valor) != EOF)
      atualizaCC(contas, cpf, operacao, valor, &totalCC);

       //impressao correntistas
      for(i=0; i<totalCC; i++)
        printf("\nCPF: %d  Saldo: %f", contas[i].cpf, contas[i].saldo);

     fclose(arquivo);

    return 0;
}

void atualizaCC(ContaCorrente *c, int cpf, char op, float valor, int *totalCC)
{
 int i;
 int posicao = -1;

 //verifica se a conta corrente existe.
 for(i = 0; i < *totalCC; i++)
 {
  if(cpf == c[i].cpf)
       posicao = i;
 }

 if(posicao == -1)
 {
  c[*totalCC].cpf = cpf;
  c[*totalCC].saldo = 0;

  if(op == 'c')
    c[*totalCC].saldo = c[*totalCC].saldo + valor;

  if(op == 'd')
    c[*totalCC].saldo = c[*totalCC].saldo - valor;

  (*totalCC)++;
 }
 else
 {
   if(op == 'c')
    c[posicao].saldo = c[posicao].saldo + valor;

   if(op == 'd')
    c[posicao].saldo = c[posicao].saldo - valor;
 }

}
