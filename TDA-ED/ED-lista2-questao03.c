#include <stdio.h>

int main()
{
  /*
   Função: Ler dois números e informar o dividendo, o divisor, o quociente e o resto do primeiro pelosegundo e do segundo pelo primeiro
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

  //variaveis
  int n1, n2;
  float q1, q2, r1, r2;
  //entrada
  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &n1, &n2);
  //processamento
  q1 = n1/n2;
  q2= n2/n1;
  r1= n1%n2;
  r2= n2%n1;
  //saida
  printf("Primeira Divisao:\nDividendo: %d\nDivisor: %d\nQuociente: %.1f\nResto: %.f\n\n", n1, n2, q1, r1);
  printf("Segunda Divisao:\nDividendo: %d\nDivisor: %d\nQuociente: %.1f\nResto: %.f", n2, n1, q2, r2);
  return 0;
}