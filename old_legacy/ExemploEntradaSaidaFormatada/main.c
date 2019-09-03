#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int i, numero;

    //abertura do arquivo
    arquivo = fopen("numeros.txt", "w+");

    if(arquivo == NULL)
    {
     printf("\n***Erro na criacao ou abertura do arquivo! ***");
    }
    else
    {
     //preenchendo arquivo com 3 numeros
     for(i=0; i < 3; i++)
     {
      printf("\nDigite um numero:");
      scanf("%d", &numero);

      fprintf(arquivo,"%d\n",numero);
     }
    }

    //retorna o ponteiro para o inicio do arquivo
    rewind(arquivo);

    // impressao dos dados do arquivo
    while (  fscanf(arquivo, "%d", &numero) != EOF)
        printf("\nNumero Lido do arquivo: %d", numero);

    fclose(arquivo);

    return 0;
}
