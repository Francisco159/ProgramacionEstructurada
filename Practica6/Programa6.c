#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color 0c");
	
	int x,i;
	float y,z;
	printf("Escribe un  numero entero: ");
	scanf("%d",&x);
	do
	{
		y=y+x;
		i++;
		printf("\nEscribe un numero entero: ");
		scanf("%d",&x);
	}while(x>=0);
	z=y/i;
	printf("\n\nEl promedio de los numeros es de: %.2f",z);
	
	printf("\n\n");
	system("Pause");
	return 0;
}
