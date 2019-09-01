#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    float valor,saldo =0;
    char operacao;
    int i;
    float maiorCredito, menorDebito;
    int inicializado = 0;

    arquivo = fopen("cc.txt", "w+");

    if(arquivo == NULL)
    {
      printf("\n***Erro ao abrir o arquivo");
    }
    else
    {
     for(i=0; i<3; i++)
     {
      fflush(stdin);
      printf("\nDigite operacao - c ou d:");
      scanf("%c", &operacao);
      printf("\nDigite valor da operacao:");
      scanf("%f", &valor);
      fprintf(arquivo, "%c %f\n", operacao, valor);
     }

     rewind(arquivo);


     while (fscanf(arquivo, "%c %f", &operacao, &valor) != EOF)
     {

       if(!inicializado) {
         maiorCredito = valor;
         menorDebito = valor;
         inicializado = 1;
       }

       if( operacao == 'c'){
        saldo = saldo + valor;

        if(valor > maiorCredito)
            maiorCredito = valor;
       }


       if(operacao == 'd') {
        saldo = saldo - valor;

        if(menorDebito > valor)
            menorDebito = valor;
       }
     }

     printf("\nAo final das transacoes o saldo sera:%.2f",saldo);
     printf("\nMaior Credito: %.2f", maiorCredito);
     printf("\nMenor Debito: %.2f", menorDebito);
    }

    fclose(arquivo);

    return 0;
}
