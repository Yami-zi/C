/*Escreva um programa em C que leia o peso (em kg) e a altura (em
metros) de uma pessoa. O programa deve calcular o IMC utilizando a
fórmula:

IMC= ____Peso______
(altura x altura)
Em seguida, exiba a classificação da pessoa de acordo com a tabela
abaixo:
• Menor que 18,5 ? Abaixo do peso
• Entre 18,5 e 24,9 ? Peso normal
• Entre 25,0 e 29,9 ? Sobrepeso
• Entre 30,0 e 34,9 ? Obesidade grau I
• Entre 35,0 e 39,9 ? Obesidade grau II
• Maior ou igual a 40,0 ? Obesidade grau III*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float altura,peso,imc;
	
	printf("What is the height?: ");
	scanf("%f",&altura);
	
	printf("What is the weight?: ");
	scanf("%f",&peso);
	

	printf("Your height is %.2f\n",altura);
	printf("Your weight is %.1f\n",peso);

	imc=(peso/(altura*altura));
	printf("Your IMC is %.1f\n",imc);
	
	if(imc < 18.5)
		printf("You are underweight");
	if(imc >= 18.5 && imc <= 24.9)
		printf("Normal weight");
	if(imc >= 25 && imc <= 29.9)
		printf("You are overweight");
	if(imc >= 30 && imc <= 34.9)
		printf("Grade 1 obesity");
	if(imc >= 35 && imc <= 39.9)
		printf("Grade 2 obesity");
	if(imc >= 40)
		printf("Grade 3 obesity");
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
