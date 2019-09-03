#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char c;

    arquivo = fopen("teste2.txt", "w");

    if(arquivo !=  NULL)
    {
        printf("\nArquivo aberto com sucesso. Endereco arquivo %u", arquivo);
        printf("\nEscrevendo a, b e c  no arquivo:");
        fputc('a', arquivo);
        fputc('b', arquivo);
        fputc('c', arquivo);
    }
    else
        printf("*** Erro ao abrir/criar arquivo!!");

    fclose(arquivo);

    arquivo = fopen("teste2.txt", "r");

    if(arquivo !=  NULL)
    {
        printf("\nArquivo aberto com sucesso. Endereco arquivo %u", arquivo);

        //leitura do arquivo caracter a caracter
        while( (c = fgetc(arquivo)) != EOF)
            printf("\nCaracter lido %c", c);

    }

    fclose(arquivo);
    return 0;
}
