#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int a[3][3],b[3][3],d[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Matriz A[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Matriz B[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		if ((a[i][j]+b[i][j])>10)
			{
				d[i][j]=b[i][j]*3;
				printf(" Matriz D[%d][%d]: %d\n",i,j,d[i][j]);
			}
		else
			{
				d[i][j]=b[i][j]+3;
				printf(" Matriz D[%d][%d]: %d\n",i,j,d[i][j]);
			}
		}
	}
	
	
	return 0;
}
