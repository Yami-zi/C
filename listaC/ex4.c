#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");	

    float peso, altura, imc;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso.\n");
    else if (imc < 25)
        printf("Peso normal.\n");
    else if (imc < 30)
        printf("Sobrepeso.\n");
    else if (imc < 35)
        printf("Obesidade grau I.\n");
    else if (imc < 40)
        printf("Obesidade grau II.\n");
    else
        printf("Obesidade grau III.\n");

    return 0;
}