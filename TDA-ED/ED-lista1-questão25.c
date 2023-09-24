#include <stdio.h>
#include <math.h>

int main() 
{
    /*
   Função: Calcular a distância de um ponto à origem no plano cartesiano
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double x, y, distancia;

    printf("Digite a coordenada X do ponto: ");

    scanf("%lf", &x);

    printf("Digite a coordenada Y do ponto: ");

    scanf("%lf", &y);

    distancia = sqrt(x * x + y * y);

    printf("A distância do ponto (%.2lf, %.2lf) à origem é: %.2lf\n", x, y, distancia);

    return 0;
}
