#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
int main()
{
	system("Color 0c");
	
	/*Declaracion de variables*/
	float Mat[3][3]={0,0,0,0,0,0,0,0,0};
	int i,j,x=1,y=1;
	bool r=1;
	float num;
	
	
	/*Lectura del numero escalar*/
	printf("Escriba el valor del n%cmero escalar que va a multiplicar la matr%cz: ",163,161);
	scanf("%f",&num);	
	/*Lectura de la matriz*/
	printf("\nEscriba los elementos de una matriz de 3x3. \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Escribe el valor del elemento %d , %d : ",x,y);
			scanf("%f",&Mat[i][j]);
			y++;
		}
		x++;
		y=1;
	}
	/*Proceso de multiplicacion*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			Mat[i][j]=Mat[i][j]*num;	
		}
	}
	
	/*Impresion de datos*/
	system("cls");
	printf("La matriz resultante es: \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f\t ",Mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	/*Proceso para system pause*/
	printf("\n\n");
	system("Pause");
	return 0;
}
