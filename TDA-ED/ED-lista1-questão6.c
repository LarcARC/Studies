#include <stdio.h>

int main() 
{
  /*
   Função: Calcular a soma de três valores inteiros inseridos pelo usuário
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    int valor1, valor2, valor3, soma;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &valor3);

    soma = valor1 + valor2 + valor3;

    printf("A soma dos três valores é: %d\n", soma);

    return 0;
}
