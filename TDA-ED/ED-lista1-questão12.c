#include <stdio.h>

int main() 
{
    /*
   Função: Converter temperatura de graus Celsius para Kelvin
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double celsius, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    kelvin = celsius + 273.15;

    printf("A temperatura em Kelvin é: %.2lfK\n", kelvin);

    return 0;
}
