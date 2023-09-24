#include <stdio.h>

int main() 
{
    /*
   Função: Converter segundos em horas, minutos e segundos
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    int segundos, horas, minutos, segundos_restantes;

    printf("Digite um valor inteiro em segundos: ");
    
    scanf("%d", &segundos);

    horas = segundos / 3600;

    minutos = (segundos % 3600) / 60;

    segundos_restantes = segundos % 60;

    printf("Tempo equivalente a %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos_restantes);

    return 0;
}
