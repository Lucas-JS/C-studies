#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorHora;
    int horasDia;
    int aulasMes;
    float desconto;
    float descontoPorCem;
    int salarioBruto;
    float salarioLiquido;

    printf("Digite o valor por hora de aula:\n");
    scanf("%i", &valorHora);

    printf("Digite a quantidade de horas trabalhadas por dia:\n");
    scanf("%i", &horasDia);

    printf("Digite o numero de aulas por mes:\n");
    scanf("%i", &aulasMes);

    printf("Digite a porcentagem do inss:\n");
    scanf("%f", &desconto);

    salarioBruto = valorHora*horasDia*aulasMes;
    descontoPorCem = desconto/100;
    salarioLiquido = salarioBruto -(salarioBruto * descontoPorCem);

    printf("salario bruto = %i\n", salarioBruto);
    printf("salario liquido = %.2f\n", salarioLiquido);


    return 0;
}
