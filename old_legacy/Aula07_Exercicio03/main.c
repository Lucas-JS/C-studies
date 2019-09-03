#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    printf("\nDigite dois numeros:");
    scanf("%d %d", &num1, &num2);

    printf("\n num1 = %d num2 = %d", num1, num2);

    p1 = p2;

    if(*p1 == *p2)
        printf("\nnumeros num1 e num2 sao iguais");
    else
        printf("\nnumeros num1 e num2 sao diferentes");

    return 0;
}
