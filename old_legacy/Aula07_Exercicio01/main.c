#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    char *p;
    p = &op;

    printf("\nDigite uma caracter:");
    scanf("%c", &op);

    printf("\nAcessando variavel atraves ponteiro:%c", *p);

    return 0;
}
