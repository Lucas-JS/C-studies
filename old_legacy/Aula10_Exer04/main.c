#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pVetor;
    int i;
    int *p;

    pVetor = (int *) calloc(10, sizeof(int));


    if(pVetor != NULL)
    {
      for(i=0; i<10; i++)
      {
       printf("\nValor da posicao %d:", i);
       scanf("%d", pVetor + i);
      }

      p = pVetor;

      for(i=0; i<10; i++)
      {
       if(*p % 2 == 0)
        printf("\nElementos par:%d", *p);
       p++;
      }


    }


    return 0;
}
