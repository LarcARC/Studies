#include <stdio.h>

int main() 
{
    /*
   Função: Converter distância de milhas para quilômetros
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double milhas, quilometros;

    printf("Digite a distância em milhas: ");
    scanf("%lf", &milhas);

    quilometros = milhas * 1.60934;
    
    printf("A distância em quilômetros é: %.2lf km\n", quilometros);

    return 0;
}
