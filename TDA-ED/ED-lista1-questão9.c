#include <stdio.h>

int main() 
{
    /*
   Função: Converter temperatura de graus Celsius para graus Fahrenheit
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em graus Fahrenheit é: %.2lf°F\n", fahrenheit);

    return 0;
}
