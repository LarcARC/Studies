#include <stdio.h>

int main() 
{
    /*
   Função: Converter área de acres para metros quadrados
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double acres, metros_quadrados;

    printf("Digite a área em acres: ");

    scanf("%lf", &acres);

    metros_quadrados = acres * 4046.86;

    printf("A área em metros quadrados é: %.2lf metros quadrados\n", metros_quadrados);

    return 0;
}
