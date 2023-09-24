#include <stdio.h>

int main() 
{
    /*
   Função: Converter velocidade de metros por segundo para quilômetros por hora
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double velocidade_ms, velocidade_kmh;

    printf("Digite a velocidade em metros por segundo (m/s): ");
    scanf("%lf", &velocidade_ms);

    velocidade_kmh = (velocidade_ms * 3600) / 1000;

    printf("A velocidade em quilômetros por hora (km/h) é: %.2lf km/h\n", velocidade_kmh);

    return 0;
}
