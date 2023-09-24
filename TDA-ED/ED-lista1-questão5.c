#include <stdio.h>

int main()
{
   /*
   Função: Calcular o equivalente em dólares a partir de um valor em reais usando uma cotação informada pelo usuário
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double valor_em_reais, cotacao_dolar, valor_em_dolares;

    printf("Digite o valor em reais: ");
    scanf("%lf", &valor_em_reais);

    printf("Digite a cotação do dólar: ");
    scanf("%lf", &cotacao_dolar);

    valor_em_dolares = valor_em_reais / cotacao_dolar;

    printf("O equivalente em dólares é: %.2lf\n", valor_em_dolares);

    return 0;
}
