#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int numero, posicao;
    int i;

    //abertura arquivo
    if ((arquivo = fopen("Dados.DAT", "w+b") ) == NULL)
        printf("\n Erro: Nao foi possivel abrir o arquivo!");
    else
    {

     //preenchimento do arquivo
     for(i=0; i < 10; i++)
      {
       printf("\nDigite um numero para a posicao %d:", i);
       scanf("%d", &numero);

       if( fwrite(&numero,sizeof(int),1,arquivo) == 1)
        printf("\n++Numero escrito com sucesso!");
       else
        printf("\n--Erro ao gravar numero no arquivo!");
      }

      //recuperando um numero
      printf("\nDigite um numero da posicao desejada:");
      scanf("%d", &posicao);

      //posicionando ponteiro arquivo e executando a leitura
      fseek(arquivo, ((long) posicao * sizeof(int)), SEEK_SET);
      fread(&numero,sizeof(int), 1,arquivo);

      printf("\nNumero da posicao %d eh %d", posicao, numero);

      //primeiro dado inserido
      rewind(arquivo);
      fread(&numero,sizeof(int), 1,arquivo);
      printf("\nNumero da posicao inicial eh %d", numero);

      //ultimo dado
      //primeiro dado inserido
      fseek(arquivo, - ((long) sizeof(int)), SEEK_END);
      fread(&numero,sizeof(int), 1,arquivo);
      printf("\nNumero da posicao final eh %d", numero);
    }

    return 0;
}
