/*Faça um programa em C para ler as notas de 10 alunos. Considere que
uma nota maior ou igual a 6 é aprovação. Ao final, mostre:
• Quantos alunos foram aprovados
• Percentual de aprovação*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,aprovados=0;
	float notas[10],porc;
	
	for(i=0;i<10;i++){
		printf("What's the student's grade? ");
		scanf("%f",&notas[i]);
		if(notas[i] >= 6)
			aprovados++;	
	}
	porc=(((float)aprovados/10)*100);
	printf("%d alunos foram aprovados \n",aprovados);
	printf("%.0f%% Foram aprovados",porc);
	
	return 0;
}
