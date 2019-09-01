#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("teste2.txt", "r");

    if(arquivo !=  NULL)
        printf("\nArquivo aberto com sucesso. Endereco arquivo %u", arquivo);
    else
        printf("*** Erro ao abrir/criar arquivo!!");

    fclose(arquivo);

    return 0;
}
