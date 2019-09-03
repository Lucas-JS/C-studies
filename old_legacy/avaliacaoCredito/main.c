#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario;
    int parcela;
    float limite;

    printf("digite o valor do salario:\n");
    scanf("%i", &salario);

    printf("Digite o valor da parcela:\n");
    scanf("%i", &parcela);

    limite = salario*0.3;

    if(limite >= parcela){
        printf("Credito concedido!\n");
    }else{
        printf("Credito nao pode ser concedido.\n");
    }


    return 0;
}
