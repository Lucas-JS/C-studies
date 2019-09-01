#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado(int *pnumero);

int main()
{
    int numero;

    printf("\nDigite um numero");
    scanf("%d", &numero);

    quadrado(&numero);

    printf("\nNumero elevado ao quadrado:%d", numero);

    return 0;
}

void quadrado(int *pnumero)
{
  *pnumero = *pnumero * *pnumero;
}

