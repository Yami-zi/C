
#include <stdio.h>
#include <locale.h>

int main() {

    float temperaturas[7][3];
    int dia, horario;

    float maiorTemp, menorTemp;

    printf("--- Por favor, insira as temperaturas da semana ---\n\n");

    for (dia = 0; dia < 7; dia++) { 
        for (horario = 0; horario < 3; horario++) { 
            
            if (horario == 0) {
                printf("Digite a temperatura da MANHA do dia %d: ", dia + 1);
            } else if (horario == 1) {
                printf("Digite a temperatura da TARDE do dia %d: ", dia + 1);
            } else {
                printf("Digite a temperatura da NOITE do dia %d: ", dia + 1);
            }

            scanf("%f", &temperaturas[dia][horario]);
        }
        printf("\n");
    }

    maiorTemp = temperaturas[0][0];
    menorTemp = temperaturas[0][0];

    printf("--- Resultados ---\n\n");

    for (dia = 0; dia < 7; dia++) {
        
        float somaDoDia = 0; 

        for (horario = 0; horario < 3; horario++) {
            
            somaDoDia = somaDoDia + temperaturas[dia][horario];

            if (temperaturas[dia][horario] > maiorTemp) {
                maiorTemp = temperaturas[dia][horario];
            }
            if (temperaturas[dia][horario] < menorTemp) {
                menorTemp = temperaturas[dia][horario];
            }
        }

        float mediaDoDia = somaDoDia / 3.0;
        printf("A media de temperatura do dia %d foi: %.1f C\n", dia + 1, mediaDoDia);
    }
    printf("\n-------------------------------------------------\n");
    printf("A MAIOR temperatura registrada na semana foi: %.1f C\n", maiorTemp);
    printf("A MENOR temperatura registrada na semana foi: %.1f C\n", menorTemp);
    printf("-------------------------------------------------\n");

    return 0;
}
