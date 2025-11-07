//Escreva um programa em C que leia três números inteiros e mostre qual é o maior deles.
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int nums[3],i=0,maior=0;
	
	for(i=0;i<3;i++){
		printf("Type the number [%d]:",i+1);
		scanf("%d",&nums[i]);
		
	}
	for(i=0;i<3;i++){
		if(nums[i] > maior)
			maior=nums[i];
		
	}
	printf("The biggest number is: %d",maior);
	
	return 0;
}
