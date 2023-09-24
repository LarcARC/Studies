#include <stdio.h>

/*
   Função: Função para calcular a diferença entre duas horas e retornar o intervalo no formato "hh:mm"
   Autor: Murilo Batista
   Turma: ADS/P2/Noite
   Data: 23/09
   Observações:
*/

void calcularDiferencaHoras(char hora1[], char hora2[], char resultado[]) {
    int hora1_hh, hora1_mm, hora2_hh, hora2_mm, dif_hh, dif_mm;

    sscanf(hora1, "%d:%d", &hora1_hh, &hora1_mm);
    sscanf(hora2, "%d:%d", &hora2_hh, &hora2_mm);

 
    int minutos1 = hora1_hh * 60 + hora1_mm;
    int minutos2 = hora2_hh * 60 + hora2_mm;
    int dif_minutos = minutos2 - minutos1;


    dif_hh = dif_minutos / 60;
    dif_mm = dif_minutos % 60;


    sprintf(resultado, "%02d:%02d", dif_hh, dif_mm);
}

int main() {
    char hora1[6], hora2[6], resultado[6];


    printf("Digite a primeira hora (hh:mm): ");
    scanf("%s", hora1);

    printf("Digite a segunda hora (hh:mm): ");
    scanf("%s", hora2);


    calcularDiferencaHoras(hora1, hora2, resultado);

    printf("A diferença entre as horas é: %s\n", resultado);

    return 0;
}
