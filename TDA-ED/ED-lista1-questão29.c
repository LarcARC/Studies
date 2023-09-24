#include <stdio.h>
#include <math.h>

/*
   Função: Calcular a velocidade final usando a equação de Torricelli
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
*/


double calcularVelocidadeFinal(double velocidade_inicial, double aceleracao, double espaco_percorrido) {
    double velocidade_final;
    
    velocidade_final = sqrt(pow(velocidade_inicial, 2) + 2 * aceleracao * espaco_percorrido);
    
    return velocidade_final;
}

int main() {
    double velocidade_inicial, aceleracao, espaco_percorrido, velocidade_final;
    

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%lf", &velocidade_inicial);
    
    printf("Digite a aceleração (m/s^2): ");
    scanf("%lf", &aceleracao);
    
    printf("Digite o espaço percorrido (m): ");
    scanf("%lf", &espaco_percorrido);
    
    velocidade_final = calcularVelocidadeFinal(velocidade_inicial, aceleracao, espaco_percorrido);
    

    printf("A velocidade final é: %.2lf m/s\n", velocidade_final);
    
    return 0;
}
