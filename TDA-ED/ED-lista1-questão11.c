#include <stdio.h>

int main() 
{
    /*
   Função: Converter temperatura de Kelvin para graus Celsius
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double kelvin, celsius;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%lf", &kelvin);

    celsius = kelvin - 273.15;
    
    printf("A temperatura em graus Celsius é: %.2lf°C\n", celsius);

    return 0;
}
