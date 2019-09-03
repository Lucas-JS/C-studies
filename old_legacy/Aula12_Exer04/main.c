#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef struct pessoa
{
    int idade;
    float salario;
    char nome[30];
    int removido;
} Pessoa;

typedef struct lista
{
   Pessoa pessoas[TAM];
   int totalPessoas;
} listaPessoas;


//prototipos
int menu();
int insere(listaPessoas *plp);
void listar(listaPessoas *plp);

int main()
{
   //criando a lista de pessoas
   listaPessoas lp;
   lp.totalPessoas = 0;
   int escolha = -1;

   do
   {
    // menu de selecao
    escolha = menu();

    switch(escolha)
    {
      case 1: insere(&lp); break;
      case 4: listar(&lp); break;
      default: printf("\n***Opcao nao implementada! ***");
    }


   }while( escolha != 6);


    return 0;
}

int menu()
{
  int opt;

  printf("\n<1> Inserir pessoas");
  printf("\n<2> Alterar pessoas");
  printf("\n<3> Apagar pessoas");
  printf("\n<4> Listar pessoas");
  printf("\n<5> Pesquisas");
  printf("\n<6> Sair");
  printf("\nDigite a opcao desejada:");
  scanf("%d", &opt);

  if(opt == 5 )
  {
    printf("\n<7> Pesquisar por intervalo de idades");
    printf("\n<8> Pesquisar por nome");
    printf("\n<9> voltar");
    printf("\nDigite a opcao desejada:");
    scanf("%d", &opt);
  }

  return opt;
}

int insere (listaPessoas *plp)
{
  fflush(stdin);

  if (plp->totalPessoas >= TAM)
  {
   printf("\n**Erro: Nao lista cheia!!");
   return 0;
  }
  else
  {
   //leitura dados pessoas
   printf("\nDigite nome da pessoa:");
   gets(plp->pessoas[plp->totalPessoas].nome);
   printf("\nDigite idade da pessoa:");
   scanf("%d", &plp->pessoas[plp->totalPessoas].idade);
   printf("\nDigite salario da pessoa:");
   scanf("%f", &plp->pessoas[plp->totalPessoas].salario);
   plp->pessoas[plp->totalPessoas].removido = 0;

   //atualiza total de pessoas
   plp->totalPessoas++;

   return 1;
  }

}

void listar(listaPessoas *plp)
{
  int i = 0;

  for( i = 0 ; i < plp->totalPessoas; i++)
  {
    if(!plp->pessoas[i].removido)
    {
    printf("\nNome: %s", plp->pessoas[i].nome);
    printf("\nIdade: %d", plp->pessoas[i].idade);
    printf("\nSalario: %.2f", plp->pessoas[i].salario);
    }
  }
}
