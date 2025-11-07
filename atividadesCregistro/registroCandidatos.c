#include <stdio.h>
#include<locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");
	
struct registro
{
  int curso,vagas,inscritos;
 } ; 
 
 struct registro candidatos[3];
 int i,totalVagas=0,totalInscritos=0;
 float vagasPor;

 for(i=0;i<3;i++){
 	printf("Qual curso? ");
 	scanf("%d",&candidatos[i].curso);
 	printf("Quantas vagas? ");
 	scanf("%d",&candidatos[i].vagas);
 	printf("Quantos inscritos? ");
 	scanf("%d",&candidatos[i].inscritos);
 	
 }
 
 printf("\nCurso    Nº de Vagas     Nº Inscritos     Candidatos/Vaga\n");
 for(i=0;i<3;i++){
 	vagasPor=candidatos[i].inscritos/candidatos[i].vagas; 
	printf("   %d             %d              %d                %.2f\n",candidatos[i].curso,candidatos[i].vagas,candidatos[i].inscritos,vagasPor);
 	totalVagas+=candidatos[i].vagas;
 	totalInscritos+=candidatos[i].inscritos;
 }
 printf("\nTotal de Vagas disponibilizadas : %d\n",totalVagas);
 printf("Total de Inscritos : %d",totalInscritos);
 
return 0;	
}
