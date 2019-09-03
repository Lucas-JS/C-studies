#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades[10];
    int i;

    for(i=0; i<10; i++)
    {
      printf("\nDigite o valor da posicao %d:", i);
      scanf("%d", (idades+i)); // scanf("%d", &idades[i])
    }

    for(i=0; i<10; i++)
    {
      printf("\nvalor da posicao %d: %d", i, *(idades+i));
      printf("\nendereco da posicao %d: %u", i, (idades +i));

    }

    return 0;
}
