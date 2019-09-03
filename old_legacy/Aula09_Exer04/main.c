#include <stdio.h>
#include <stdlib.h>

void parimpar(int *vet, int *A, int *B, int tam);

int main()
{

    int A[11];
    int B[11];
    int vetor[10];
    int i;

    for(i=0; i<10; i++) {
      printf("\nDigite o valor da posicao %d:", i);
      scanf("%d", &vetor[i]);
    }

    parimpar(vetor, A, B, 10);

     for(i=1; i<=A[0]; i++) {
      printf("\nvalor da posicao %d do vetor A: %d", i-1, A[i]);
    }

    for(i=1; i<=B[0]; i++) {
      printf("\nvalor da posicao %d do vetor B: %d", i-1,  B[i]);
    }

    return 0;
}

void parimpar(int *vet, int *A, int *B, int tam)
{
  int totalPares = 0, totalImpares = 0;
  int i;

  for(i=0; i< tam; i++) {

    if(*(vet+i) %2 == 0 )
    {
      *(A+totalPares+1) = *(vet+i);
      totalPares++;
    }
    else
    {
      *(B+totalImpares+1) = *(vet+i);
      totalImpares++;
    }

  }

    *A = totalPares;
    *B = totalImpares;
}

