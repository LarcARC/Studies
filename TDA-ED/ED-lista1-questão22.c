#include <stdio.h>
#include <math.h>

int main() 
{
    /*
   Função: Calcular o volume de um cilindro circular
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
  */

    double raio, altura, volume;

    printf("Digite o raio do cilindro (em metros): ");
    
    scanf("%lf", &raio);

    printf("Digite a altura do cilindro (em metros): ");

    scanf("%lf", &altura);

    volume = M_PI * pow(raio, 2) * altura;

    printf("O volume do cilindro é: %.2lf metros cúbicos\n", volume);

    return 0;
}
