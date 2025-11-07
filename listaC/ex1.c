#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n > 0)
        printf("O numero é positivo.\n");
    else if (n < 0)
        printf("O numero é negativo.\n");
    else
        printf("O numero é zero.\n");

    return 0;
}
