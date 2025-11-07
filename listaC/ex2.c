#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("O numero eh par.\n");
    else
        printf("O numero eh impar.\n");

    return 0;
}