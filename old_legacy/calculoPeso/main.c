#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso;
    int pesoGrama;
    float engorda;

    printf("Digite o peso da pessoa:\n");
    scanf("%i", &peso);

    pesoGrama = peso * 1000;
    engorda = (peso*.12)+peso;

    printf("Peso da pessoa em gramas = %i gramas\npeso 12 porcento mais gorda = %.2f", pesoGrama, engorda);

    return 0;
}
