#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char c;

    arquivo = fopen("teste.txt", "w");

    if (arquivo != NULL )
    {
        printf("\nArquivo aberto com sucesso, Endereco do arquivo %u", arquivo);
        printf("\nEscrevendo a,b e c no arquivo: ");
        fputc('a',arquivo);
        fputc('b', arquivo);
        fputc('c', arquivo);
    }
    else
        printf("\nErro ao abrir/criar arquivo!!!");

        return 0;
    }
