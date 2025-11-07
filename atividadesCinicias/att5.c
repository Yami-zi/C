//Faça um programa em C que leia um número inteiro e mostre a tabuada desse número de 1 a 10.
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num,tab[11],i;
	
	printf("Type number: ");
	scanf("%d",&num);
	
	for(i=1;i<11;i++){
		tab[i]=num*i;
		printf("%d x %d = %d\n",num,i,tab[i]);
	}
		
	
	
	
	
	return 0;
}
