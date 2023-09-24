#include <stdio.h>
#include <math.h>

int main() 
{
    /*
   Função: Converter ângulo de radianos para graus
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double radianos, graus;

    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &radianos);

    graus = radianos * (180.0 / M_PI);

    printf("O ângulo em graus é: %.4lf°\n", graus);

    return 0;
}
