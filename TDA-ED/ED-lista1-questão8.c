#include <stdio.h>

int main() 
{
    /*
   Função: Calcular a quinta parte de um número real inserido pelo usuário
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double numero, quinta_parte;

    printf("Digite um número real: ");
    scanf("%lf", &numero);

    quinta_parte = numero / 5.0;

    printf("A quinta parte do número é: %.2lf\n", quinta_parte);

    return 0;
}
