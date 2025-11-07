#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int matriz[3][4],a,b,somapos=0,negativos=0,maior=0,somapar=0;
	
	for(a=0;a<3;a++)
	{
	  for(b=0;b<4;b++)
		{
		printf("Matriz [%d][%d]: ",a,b);
		scanf("%d",&matriz[a][b]);
		
		if(matriz[a][b]>=0)
			somapos+=matriz[a][b];
		else
			negativos++;
		if(matriz[a][b]>maior)
			maior=matriz[a][b];
		if(matriz[a][b] % 2 == 0)
			somapar+=matriz[a][b];
		}					
	}
	printf("A soma dos positivos foi: %d\n",somapos);
	printf("A quantidade de negativos foi: %d\n",negativos);
	printf("A maior número foi: %d\n",maior);
	printf("A soma dos números pares foi: %d\n",somapar);

	
	
	
	
	return 0;
}
