#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int a, b, c;
    printf("Digite os três lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Triangulo Equilatero.\n");
        else if (a == b || a == c || b == c)
            printf("Triangulo Isosceles.\n");
        else
            printf("Triangulo Escaleno.\n");
    } else {
        printf("Não é possivel formar um triangulo.\n");
    }

    return 0;
}
