#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int resto;
    printf("digite um numero inteiro:\n");
    scanf("%i", &numero);

    resto = numero % 2;
    if(resto == 0){
        printf("numero par!");
    }else{
        printf("numero impar!");
    }

    return 0;
}
