#include <stdio.h>
#include <stdlib.h>


void encontrarMaiorMenor(int *vetor, int* maior, int* menor, int tam);

int main()
{
    int *pVetor;
    int i;
    int tam;
    int maior, menor;

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

    encontrarMaiorMenor(pVetor, &maior, &menor, tam);

    printf("\nO maior valor eh:%d", maior);
    printf("\nO menor valor eh:%d", menor);

    free(pVetor);

    return 0;
}

void encontrarMaiorMenor(int *vetor, int* maior, int* menor, int tam)
{
  int i;
  *maior = *vetor;
  *menor = *vetor;

  for (i=1; i < tam; i++)
  {
   if(*(vetor+i) > *maior )
        *maior = *(vetor+i);
   if(*(vetor+i) < *menor )
        *menor = *(vetor+i);
  }

}
