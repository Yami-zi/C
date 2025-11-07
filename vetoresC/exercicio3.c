#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor1[10], vetor2[10], vetor3[10];
    int i;

    printf("Digite 10 numeros inteiros para o vetor1:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor1[%d]: ", i+1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 10 numeros inteiros para o vetor2:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor2[%d]: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vetor3[i] = vetor1[i] + vetor2[i]; 
        } else {
            vetor3[i] = vetor1[i] * vetor2[i]; 
        }
    }

    printf("\nVetor3 resultante:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor3[%d] = %d\n", i+1, vetor3[i]);
    }

    return 0;
}
