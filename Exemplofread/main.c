#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    FILE *arquivo;
    int i, totalDadosLidos;

    //abertura do arquivo
    arquivo = fopen("Dados.dat", "rb");

    if (arquivo == NULL)
        printf("\nErro: N�o foi poss�vel abir o arquivo");
    else
    {
      // leitura do vetor no arquivo
      totalDadosLidos = fread(v, sizeof(int), 5, arquivo);

      if(totalDadosLidos != 5)
          printf("\nErro: N�o foi poss�vel ler com sucesso todos os dados no arquivo");
      else
      {
          printf("\nVetor Lido com Sucesso!");

          for(i = 0; i < 5; i++)
            printf("\nv[%d] = %d", i, v[i]);
      }
    }
    return 0;
}
