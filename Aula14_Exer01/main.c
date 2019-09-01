#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *arquivo;
    int v[50];
    int i, totalItens;

    if ( (arquivo = fopen("dados.dat", "w+b")) == NULL)
        printf("\nErro ao abrir o arquivo!");
    else
    {
      srand(time(NULL));
      //preenchendo vetor
      for (i = 0; i < 50; i++)
        v[i] = rand() % 100;

      //preenchendo o arquivo
      totalItens = fwrite(v, sizeof(int), 50, arquivo);

      if(totalItens == 50)
        printf("\nvetor escrito com sucesso!");
      else
        printf("\nTotal de dados escritos %d", totalItens);

    }

    rewind(arquivo);

    //leitura do vetor
    totalItens = fread(v, sizeof(int), 50, arquivo);

    if(totalItens == 50)
    {
      for(i=0; i < 50; i++)
         printf("\nv[%d]=%d", i, v[i]);
    }
    else
        printf("\nErro ao ler dados do arquivo");

    fclose(arquivo);

    return 0;
}
