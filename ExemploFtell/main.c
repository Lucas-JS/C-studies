#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    FILE *arquivo;
    int i = 0, totalDadosLidos;

     //abertura do arquivo
    arquivo = fopen("Dados.dat", "rb");

    if (arquivo == NULL)
        printf("\nErro: Não foi possível abir o arquivo");
    else
    {
      // leitura do vetor no arquivo
      totalDadosLidos = fread(&v[i], sizeof(int), 1, arquivo);

      while(totalDadosLidos == 1)
      {
       printf("\nValor lido %d, posicao %ld", v[i], ftell(arquivo) );
       i++;
       totalDadosLidos = fread(&v[i], sizeof(int), 1, arquivo);
      }

    }

    return 0;
}
