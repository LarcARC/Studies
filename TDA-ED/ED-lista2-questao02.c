#include <stdio.h>

int main()
{
  /*
   Função: Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s(metros por segundo). A fórmula de conversão é , sendo K a velocidade emkm/h e M em m/s
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

  //variaveis
  float km, ms;
  //entrada
  printf("Digite a velocidade em km/h: ");
  scanf("%f", &km);
  //processamento
  ms = km/3.6;
  //saida
  printf("A velocidade em m/s e: %.1f", ms);
  return 0;
}