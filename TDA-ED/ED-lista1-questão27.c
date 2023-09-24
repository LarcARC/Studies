#include <stdio.h>

int main() 
{
    /*
   Função: Calcular o salário líquido de um professor
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double valor_hora_aula, salario_bruto, salario_liquido;
    int aulas_dadas;
    double percentual_inss;


    printf("Digite o valor da hora-aula: R$ ");
    scanf("%lf", &valor_hora_aula);

    printf("Digite o número de aulas dadas no mês: ");
    scanf("%d", &aulas_dadas);


    printf("Digite o percentual de desconto do INSS: ");
    scanf("%lf", &percentual_inss);


    salario_bruto = valor_hora_aula * aulas_dadas;

 
    double desconto_inss = (percentual_inss / 100) * salario_bruto;

  
    salario_liquido = salario_bruto - desconto_inss;

  
    printf("Salário bruto: R$ %.2lf\n", salario_bruto);
    printf("Desconto do INSS: R$ %.2lf\n", desconto_inss);
    printf("Salário líquido: R$ %.2lf\n", salario_liquido);

    return 0;
}
