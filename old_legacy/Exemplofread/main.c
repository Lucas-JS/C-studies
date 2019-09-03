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
        printf("\nErro: Não foi possível abir o arquivo");
    else
    {
      // leitura do vetor no arquivo
      totalDadosLidos = fread(v, sizeof(int), 5, arquivo);

      if(totalDadosLidos != 5)
          printf("\nErro: Não foi possível ler com sucesso todos os dados no arquivo");
      else
      {
          printf("\nVetor Lido com Sucesso!");

          for(i = 0; i < 5; i++)
            printf("\nv[%d] = %d", i, v[i]);
      }
    }
    return 0;
}
