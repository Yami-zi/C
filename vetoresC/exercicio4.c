#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigos[5], estoque[5];
    int i, codProduto, qtdDesejada, encontrado = 0;

    printf("Cadastro dos produtos:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &codigos[i]);
        printf("Digite a quantidade em estoque %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codProduto);
    printf("Digite a quantidade que deseja: ");
    scanf("%d", &qtdDesejada);

    for (i = 0; i < 5; i++) {
        if (codigos[i] == codProduto) {
            encontrado = 1;
            if (qtdDesejada > estoque[i]) {
                printf("\nVenda cancelada: Fora de estoque\n");
            } else {
                printf("\nVenda realizada com sucesso!\n");
                printf("Produto: %d\n", codigos[i]);
                printf("Quantidade solicitada: %d\n", qtdDesejada);
                printf("Estoque anterior: %d\n", estoque[i]);
                estoque[i] -= qtdDesejada;
                printf("Estoque atualizado: %d\n", estoque[i]);
            }
            break;
        }
    }

    if (!encontrado) {
        printf("\nProduto inexistente!\n");
    }

    return 0;
}
