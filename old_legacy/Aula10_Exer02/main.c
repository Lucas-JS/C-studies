#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pVetor;
    int i;
    int tam;

    printf("\nDigite o tamanho do vetor:");
    scanf("%d", &tam);

    pVetor = (int *) malloc(tam * sizeof(int));

    if(pVetor != NULL)
    {
      for(i=0; i < tam; i++)
      {
       printf("\nDigite elemento da posicao %d:", i);
       scanf("%d", pVetor + i);
      }
    }
    else
        printf("\nNao foi possivel alocar memoria!!");

    printf("\nElementos do vetor:");
    for(i=0; i < tam; i++)
      {
       printf("\nDigite elemento da posicao %d:%d", i,*(pVetor+i));
      }

    free(pVetor);

    return 0;
}
