#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color 0c");
	
	/*Declaracion de variables*/
	int i,num_b,num_m;
	
	printf("Escribe el numero a usar como base: ");
	scanf("%d",&num_b);
	printf("\nEscribe el numero limite de los multiplos: ");
	scanf("%d",&num_m);
	
	int num[num_m];
	
	/*Proceso*/
	for(i=0;i<num_m;i++)
	{
		num[i]=num_b*(i+1);
	}
	
	/*Impresion de datos*/
	printf("\nNumeros multiplos de la base '%d'\n",num_b);
	for(i=0;i<num_m;i++)
	{
		printf("%d\n",num[i]);
	}
	
	
	/*Proceso para system pause*/
	printf("\n\n");
	system("Pause");
	return 0;
	
}
