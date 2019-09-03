#include <stdio.h>
#include <stdlib.h>

void inverte(int *vet1, int *vet2, int tam);

int main()
{
    int a[5];
    int b[5];
    int i;

    for(i=0; i<5; i++)
    {
     printf("\nDigite o valor da posicao %d:", i);
     scanf("%d", &a[i]); //a+i
    }

    inverte(a,b,5);

     for(i=0; i<5; i++)
    {
     printf("\nvalor da posicao %d do vetor b:%d", i, b[i]);
    }

    return 0;
}

void inverte(int *vet1, int *vet2, int tam)
{
  int i;

  //posicionando vet1 na ultima posicao
  vet1 = vet1 + (tam-1);

  for(i=0; i < tam; i++)
  {
    *vet2 = *vet1;
    vet1--;
    vet2++;
  }

}
