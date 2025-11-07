#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int n, i, soma = 0;
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0)
            soma += n;
    }
    printf("Soma dos pares = %d\n", soma);

    return 0;
}