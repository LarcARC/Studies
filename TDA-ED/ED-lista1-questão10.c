#include <stdio.h>

int main() 
{
    /*
   Função: Converter temperatura de graus Fahrenheit para graus Celsius
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double fahrenheit, celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("A temperatura em graus Celsius é: %.2lf°C\n", celsius);

    return 0;
}
