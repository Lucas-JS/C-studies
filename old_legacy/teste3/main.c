#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int qtd;
    scanf("%d",&qtd);
    int x1,x2,x3,x4;
    int d;
    int acm = 0;

    int i;
    for(i = 0;i < qtd;i++){
        scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
        d = (int)ceil(sqrt( pow (x1 - x3, 2) + pow (x2 - x4, 2)));
        printf("%d\n", d);
        acm +=pow(d,2);
    }
    return acm;
}
