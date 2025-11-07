#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int a, b, c, maior;
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    printf("O maior numero é: %d\n", maior);

    return 0;
}
