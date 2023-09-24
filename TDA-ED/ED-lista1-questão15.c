#include <stdio.h>

int main() 
{
    /*
   Função: Converter distância de quilômetros para milhas
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double quilometros, milhas;

    printf("Digite a distância em quilômetros: ");

    scanf("%lf", &quilometros);

    milhas = quilometros / 1.60934;

    printf("A distância em milhas é: %.2lf mi\n", milhas);

    return 0;
}
