#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero = 10;
    float *p;
    p = &numero;

    printf("\nendereco numero: %u", &numero);
    printf("\nendereco do ponteiro: %u", p);
    printf("\nconteudo de p: %f", *p);

    p++;

    printf("\nendereco numero: %u", &numero);
    printf("\nendereco do ponteiro: %u", p);
    printf("\nconteudo de p: %f", *p);
    return 0;
}
