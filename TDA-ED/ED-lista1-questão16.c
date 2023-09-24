#include <stdio.h>
#include <math.h>

int main() 
{
    /*
   Função: Converter ângulo de graus para radianos
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double graus, radianos;

    printf("Digite o ângulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (M_PI / 180.0);

    printf("O ângulo em radianos é: %.4lf rad\n", radianos);

    return 0;
}
