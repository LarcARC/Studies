#include <stdio.h>

int main() 
{
    /*
   Função: Converter área de metros quadrados para acres
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double metros_quadrados, acres;

    printf("Digite a área em metros quadrados: ");

    scanf("%lf", &metros_quadrados);

    acres = metros_quadrados * 0.000247105;

    printf("A área em acres é: %.6lf acres\n", acres);

    return 0;
}
