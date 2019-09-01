#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int numero, soma =0;

    arquivo = fopen("dados.txt", "w+");

    if(arquivo == NULL)
    {
      printf("\n***Erro ao abrir o arquivo");
    }
    else
    {
      printf("\nDigite um numero (-1 para a leitura):");
      scanf("%d", &numero);

      while( numero >= 0 )
      {
        fprintf(arquivo,"%d\n", numero);
        printf("\nDigite um numero (-1 para a leitura):");
        scanf("%d", &numero);
      }

      rewind(arquivo);

      while (  fscanf(arquivo, "%d", &numero) != EOF)
        soma = soma + numero;

      printf("\nSoma dos numeros armazenados no arquivo: %d", soma);


    }

    fclose(arquivo);
    return 0;
}
