#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color fc");
	
	int x,i,j,mat[3][3];
	
	printf("Escribe un n%cmero entero: ",163);
	scanf("%d",&x);
	
	printf("\nEscribe los valores de un arreglo 3x3 (n%cmeros enteros):\n\n",163);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Escribe el n%cmero del lugar [%d][%d]: ",163,i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	system("cls");
	printf("Los valores de la matriz ingresada son:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEl valor escalar ingresado fue: %d\n\n",x);
	
	printf("El arreglo que se genero al multiplicar el original por el n%cmero escalar fue:\n\n",163);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(mat[i][j])*x);
		}
		printf("\n");
	}
	
	printf("\n\n");
	system("pause");
	
	return 1;
}
