#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");	
	int prof[5],i=0,procura=0,encontro=0;
	float horaA[5],horaEncontrada=0,cargaH=0;
	
	for (i=0;i<5;i++){
		printf("Digite o codigo do professor[%d]: ",i+1);
		scanf("%d",&prof[i]);	
	
		printf("Qual o valor de hora aula do professor[%d]? ",i+1);
		scanf("%f",&horaA[i]);
	}
	for (i=0;i<5;i++){
		printf("Codigo do professor [%d] é: %d \n",i+1,prof[i]);
		printf("Hora aula do professor [%d] é: %.2f \n",i+1,horaA[i]);
	}
	printf("Qual professor deseja saber?");
	scanf("%d",&procura);
	
	for (i=0;i<5;i++){
		if(procura == prof[i]){
		encontro=1;
		horaEncontrada=horaA[i];
		printf("Hora encontrada foi %.2f\n",horaEncontrada);
		}
		
		}
	if(encontro == 1){
		printf("Quantas horas ele trabalhou?");
		scanf("%f",&cargaH);
		printf("Salário foi de %.2f",4.5*horaEncontrada*cargaH);
	}
	else
		printf("Professor não encontrado");
	
	return 0;
}
