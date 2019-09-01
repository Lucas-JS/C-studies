#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    numero = 100;

    int numero2;
    numero2 = 200;

    int *p;

    p = &numero;

    printf("\nValor de numero:%d", numero );
    printf("\nEndereco de numero:%u", &numero );

    printf("\nValor de p:%d", p );
    printf("\nEndereco de p:%u", &p );
    printf("\nValor apontado por p:%d", *p);

    p = &numero2;

    printf("\nValor de numero2:%d", numero2 );
    printf("\nEndereco de numero2:%u", &numero2 );

    printf("\nValor de p:%d", p );
    printf("\nEndereco de p:%u", &p );
    printf("\nValor apontado por p:%d", *p);

    return 0;
}
