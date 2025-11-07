#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];
    int i,vzs, x, cont = 0;

	printf("Quantos numeros quer utilizar?\n");
	scanf("%d",&vzs);

    printf("Digite %d numeros inteiros:\n",vzs);
    for (i = 0; i < vzs; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite o numero X que deseja contar: ");
    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            cont++;
        }
    }

    printf("\nO numero %d aparece %d vez(es) no vetor.\n", x, cont);

    return 0;
}
