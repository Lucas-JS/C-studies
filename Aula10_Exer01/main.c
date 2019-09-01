#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pInt;
    float *pFloat;
    char *pChar;

    pInt = (int *) malloc(sizeof(int));
    pFloat = (float *) malloc(sizeof(float));
    pChar = (char *) malloc(sizeof(char));

    if(pInt != NULL)
    {
     printf("\nDigite um inteiro:");
     scanf("%d", pInt);
     printf("\nValor armazenado %d", *pInt);
    }

    if(pFloat != NULL)
    {
     printf("\nDigite um real:");
     scanf("%f", pFloat);
     printf("\nValor armazenado %f", *pFloat);
    }

    if(pChar != NULL)
    {
     fflush(stdin);
     printf("\nDigite um char:");
     scanf("%c", pChar);
     printf("\nValor armazenado %c", *pChar);
    }

    //liberando memoria
    free(pInt);
    free(pFloat);
    free(pChar);

    return 0;
}
