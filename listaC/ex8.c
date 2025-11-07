#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int idade, soma = 0, cont = 0;
    float media;

    printf("Digite idades (Digite 0 para sair):\n");
    while (1) {
        scanf("%d", &idade);
        if (idade <= 0)
            break;
        soma += idade;
        cont++;
    }

    if (cont > 0) {
        media = (float) soma / cont;
        printf("Idade média = %.2f\n", media);
    } else {
        printf("Nenhuma idade informada.\n");
    }

    return 0;
}
