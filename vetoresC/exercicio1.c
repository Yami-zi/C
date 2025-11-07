#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[5];  
    int i, soma = 0;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nNumeros digitados: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSoma dos elementos = %d\n", soma);

    return 0;
}
