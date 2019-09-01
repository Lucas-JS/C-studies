#include <stdio.h>
#include <stdlib.h>

int contar(int *x, int tam);

int main()
{
    int numeros[5];
    int i;

    for(i=0; i <5; i++) {
        printf("\nDigite o valor do elemento %d:", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nQuantidade de elementos entre 1 e 9: %d", contar(numeros,5));

    return 0;
}

int contar(int *x, int tam)
{
  int i;
  int totalItens = 0;

  for(i=0; i < tam; i++) {
    if (*x>=1 && *x<=9)
     totalItens++;
   x++;
  }

  return totalItens;
}
