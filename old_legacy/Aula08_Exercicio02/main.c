#include <stdio.h>
#include <stdlib.h>

void converte(int hora, int minutos, int *minutosTotal);

int main()
{
    int hora, minutos, totalMinutos =0;

    printf("\nDigite o valor da hora:");
    scanf("%d", &hora);

    printf("\nDigite o valor dos minutos:");
    scanf("%d", &minutos);

    printf("=> Horas: %d Minutos: %d", hora, minutos);

    converte(hora, minutos, &totalMinutos);

    printf("\nTotal de minutos:%d", totalMinutos);

    return 0;
}

void converte(int hora, int minutos, int *minutosTotal)
{
  *minutosTotal = (hora*60)+minutos;
}

