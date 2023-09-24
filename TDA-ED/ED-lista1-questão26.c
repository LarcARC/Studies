#include <stdio.h>

int main() 
{
    /*
   Função: Calcular o horário de término de uma experiência biológica
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    int hora_inicio, minuto_inicio, segundo_inicio;
    int duracao, hora_termino, minuto_termino, segundo_termino;


    printf("Digite a hora de início (0-23): ");
    scanf("%d", &hora_inicio);

    printf("Digite o minuto de início (0-59): ");
    scanf("%d", &minuto_inicio);

    printf("Digite o segundo de início (0-59): ");
    scanf("%d", &segundo_inicio);


    printf("Digite a duração da experiência em segundos: ");
    scanf("%d", &duracao);


    segundo_termino = segundo_inicio + duracao;
    minuto_termino = minuto_inicio + segundo_termino / 60;
    hora_termino = hora_inicio + minuto_termino / 60;


    segundo_termino %= 60;
    minuto_termino %= 60;
    hora_termino %= 24;


    printf("O horário de término da experiência é: %02d:%02d:%02d\n", hora_termino, minuto_termino, segundo_termino);

    return 0;
}
