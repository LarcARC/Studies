#include <stdio.h>

int main() 
{
    /*
   Função: Converter comprimento de polegadas para centímetros
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double polegadas, centimetros;

    printf("Digite o comprimento em polegadas: ");
    scanf("%lf", &polegadas);

    centimetros = polegadas * 2.54;

    printf("O comprimento em centímetros é: %.2lf cm\n", centimetros);

    return 0;
}
