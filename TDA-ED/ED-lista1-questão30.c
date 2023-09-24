#include <stdio.h>

int main() 
{
    /*
   Função: Calcular a densidade de uma substância
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double massa, volume, densidade;

    printf("Digite a massa da substância (em kg): ");
    scanf("%lf", &massa);

    printf("Digite o volume da substância (em m^3): ");
    scanf("%lf", &volume);

    densidade = massa / volume;

    printf("A densidade da substância é: %.2lf kg/m^3\n", densidade);

    return 0;
}
