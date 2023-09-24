#include <stdio.h>
#include <math.h>

int main() 
{
   /*
   Função: Calcular o quadrado e o cubo de um número real inserido pelo usuário
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double numero, quadrado, cubo;

    printf("Digite um número real: ");
    scanf("%lf", &numero);

    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);

    printf("O quadrado do número é: %.2lf\n", quadrado);
    printf("O cubo do número é: %.2lf\n", cubo);

    return 0;
}
