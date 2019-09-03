#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *) malloc(10 * sizeof(int));

    *ptr = 12;
     *(ptr+1) = 13;

    printf("%u", &ptr);
    printf("\n%i", ptr);
    printf("\n%i", *ptr);
     printf("\n%i", *(ptr+1));
    return 0;
}
