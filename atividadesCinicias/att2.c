//Escreva um programa em C que leia um número inteiro e informe se ele é par ou ímpar.
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Type the number: ",num);
	scanf("%d",&num);
	
	if(num % 2 == 0)
		printf("The number is even");
	if(num % 2 != 0)
		printf("The number is odd");
	
	
	return 0;
}
