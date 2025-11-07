#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    int idade, i, menores18 = 0, somaIdade = 0, mais3000 = 0;
    float salario, somaSalario = 0;

    for (i = 1; i <= 10; i++) {
        printf("Pessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Salário: ");
        scanf("%f", &salario);

        somaIdade += idade;
        somaSalario += salario;

        if (salario > 3000)
            mais3000++;
        if (idade < 18)
            menores18++;
    }

    printf("Idade média: %.2f\n", somaIdade / 10.0);
    printf("Média salarial: %.2f\n", somaSalario / 10.0);
    printf("Mais de R$3000: %d pessoas\n", mais3000);
    printf("Menores de 18: %d pessoas\n", menores18);

    return 0;
}
