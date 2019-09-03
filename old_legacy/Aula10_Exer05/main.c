#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pVetor;
    int i;
    int *p;
    int soma, maior, menor;

    pVetor = (int *) calloc(20, sizeof(int));


    if(pVetor != NULL)
    {
      for(i=0; i<20; i++)
      {
       printf("\nValor da posicao %d:", i);
       scanf("%d", pVetor + i);
      }
    }

    pVetor = (int *) realloc(pVetor, 23 *sizeof(int));

    maior = *pVetor;
    menor = *pVetor;
    soma = *pVetor;

    if(pVetor != NULL)
    {
      for(i=1; i<20; i++)
      {
       soma = soma + *(pVetor + i);

       if (maior < *(pVetor + i))
         maior = *(pVetor + i);

       if (menor > *(pVetor + i))
         menor = *(pVetor + i);
      }
    }

    *(pVetor+22) = soma / 20;
    *(pVetor+21) = maior;
    *(pVetor+20) = menor;


    printf("Media %d Maior %d Menor %d",*(pVetor+22),*(pVetor+21),*(pVetor+20) );

    return 0;
}
