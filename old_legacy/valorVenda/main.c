#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorProduto;
    float valorVenda;

    printf("digite o valor do produto:\n");
    scanf("%i", &valorProduto);

    if(valorProduto < 20){
        valorVenda = (valorProduto*0.3)+valorProduto;
    }else{
        valorVenda = (valorProduto*0.45)+valorProduto;
    }

    printf("valor de venda e = %.2f", valorVenda);
    return 0;
}
