#include <stdio.h>

int main() 
{
    /*
   Função: Calcular o novo salário com aumento de 25%
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double salario_antigo, novo_salario;

    printf("Digite o salário atual do funcionário: R$ ");
    
    scanf("%lf", &salario_antigo);

    novo_salario = salario_antigo + (salario_antigo * 0.25);

    printf("O novo salário do funcionário é: R$ %.2lf\n", novo_salario);

    return 0;
}
