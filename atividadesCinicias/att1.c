//Escreva um programa em C que leia um número inteiro e informe se ele  é positivo, negativo ou igual a zero.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	printf("Type the number: ");
	scanf("%d",&num);
	printf("The number is %d.\n",num);
	if (num > 0)
		printf("The number is positive.");
	if (num < 0)
		printf ("The number is negative");
	else 
		printf ("The number is equal zero/neutral");	
	
	
	
	
	
	return 0;
}
