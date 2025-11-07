#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int l,c;
	float matriz[3][4],maior,percentual,total=0;
	
	for(l=0;l<3;l++){
		for(c=0;c<4;c++){
			printf("Qual o valor do pagamento? ");
			scanf("%f",&matriz[l][c]);
			printf("%.2f \n",matriz[l][c]);
			total+=matriz[l][c];
			if(matriz[l][c] > maior){
				maior=matriz[l][c];
			}
			if(matriz[l][c] < 1800){
				percentual++;
			}
		}
	}
	
	printf("Total foi: %.2f \n",total);
	printf("O maior valor foi %.2f \n",maior);
	printf("A porcentagem dos salários abaixo de R$1800 foi %.0f%%",(percentual/12)*100);
	
	
	return 0;
}
