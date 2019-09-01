#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int *v, int tam);

int main()
{
    FILE *arquivo, *arquivoSaida;
    int numero, i;
    int dados[500];

    arquivo = fopen("dados.txt", "w+");

    if(arquivo == NULL)
    {
      printf("\n***Erro ao abrir o arquivo");
    }
    else
    {
     //gerando arquivo com numeros aleatoricos
     srand( (unsigned) time(NULL));

     for(i = 0; i < 500; i++)
        fprintf(arquivo, "%d\n", rand());

     rewind(arquivo);

     //carregando arquivo para vetor
    for(i = 0; i < 500; i++)
        fscanf(arquivo,"%d",&dados[i]);
    }

    ordena(dados, 500);

    for(i = 0; i < 500; i++)
        printf("%d\n", dados[i]);

    arquivoSaida = fopen("dadosOrd.txt", "w+");

    if(arquivoSaida == NULL)
        printf("\n***Erro ao abrir o arquivo");
    else
    {
     for(i = 0; i < 500; i++)
        fprintf(arquivoSaida, "%d\n", dados[i]);
    }

    fclose(arquivo);
    fclose(arquivoSaida);
    return 0;
}

void ordena(int *v, int tam)
{
  int i, aux;
  int trocou = 1;

  while(trocou)
  {
      trocou = 0;
      for(i=0; i < tam -1; i++)
      {
        if (v[i] > v[i+1] )
        {
          aux = v[i];
          v[i] = v[i+1];
          v[i+1] = aux;
          trocou = 1;
        }
      }
  }
}
