#include <stdio.h>

int main()
{
   /*
   Função: Escreva um algoritmo para determinar a área e o perímetro de um retângulo
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double comprimento, largura, area, perimetro;

    // Solicita ao usuário que insira o comprimento e a largura do retângulo
    printf("Digite o comprimento do retângulo: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do retângulo: ");
    scanf("%lf", &largura);

    // Calcula a área e o perímetro do retângulo
    area = comprimento * largura;
    perimetro = 2 * (comprimento + largura);

    // Mostra os resultados
    printf("A área do retângulo é: %.2lf unidades quadradas\n", area);
    printf("O perímetro do retângulo é: %.2lf unidades lineares\n", perimetro);

    return 0;
}
