#include <stdio.h>

int main()
{
  /*
   Função: Um programa para receber 5 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira)
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

  //variaveis
  int n1, n2, n3, n4, n5;
  float m;

  //entrada
  printf("Informe suas notas em sequencia: ");
  scanf(" %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  //processamento
  m = (n1+n2+n3+n4+n5)/5; 
  //saída
  printf("Sua media e de: %.1f", m);

return 0;
}