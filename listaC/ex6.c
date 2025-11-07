#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    float nota;
    int i, aprovados = 0;
    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        if (nota >= 6)
            aprovados++;
    }

    printf("Total aprovados: %d\n", aprovados);
    printf("Percentual de aprovacao: %.1f%%\n", (aprovados / 10.0) * 100);

    return 0;
}