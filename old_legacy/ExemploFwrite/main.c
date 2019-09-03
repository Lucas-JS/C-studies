#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    FILE *arquivo;
    int i, totalEscritos;

    for (i = 0; i < 5; i++)
    {
      printf("\nDigite o valor do elemento %d do vetor", i);
      scanf("%d", &v[i]);
    }

    //abertura do arquivo
    arquivo = fopen("Dados.dat", "wb");

    if (arquivo == NULL)
        printf("\nErro: Não foi possível abir o arquivo");
    else
    {
     // escrita do vetor no arquivo
     totalEscritos = fwrite(v, sizeof(int), 5, arquivo);

     if(totalEscritos != 5)
       printf("\nErro: Não foi possível escrever com sucesso todos os dados no arquivo");
     else
        printf("\nVetor Escrito com Sucesso!");
    }

    return 0;
}
