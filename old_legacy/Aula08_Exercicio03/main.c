#include <stdio.h>
#include <stdlib.h>

void converte(int *horas, int *minutos, int totalMinutos);

int main()
{
    int horas, minutos, totalMinutos;

    printf("\nDigite o total de minutos:");
    scanf("%d", &totalMinutos);

    converte(&horas, &minutos, totalMinutos);

    printf("\n=> %dH%dmin", horas, minutos);

    return 0;
}

void converte(int *horas, int *minutos, int totalMinutos)
{
 *horas = totalMinutos / 60;
 *minutos = totalMinutos % 60;
}
