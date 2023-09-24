#include <stdio.h>

int main() 
{
    /*
   Função: Converter volume de metros cúbicos para litros
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double metros_cubicos, litros;

    printf("Digite o volume em metros cúbicos: ");
    
    scanf("%lf", &metros_cubicos);

    litros = metros_cubicos * 1000.0;

    printf("O volume em litros é: %.2lf litros\n", litros);

    return 0;
}
