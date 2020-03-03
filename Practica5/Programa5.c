#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color 0c");
	int x=0,y=0,i=0;
	float z=0;
	printf("Introduzca un numero entero: ");
	scanf("%d",&x);
	while(x>=0)
	{
		y=y+x;
		i=i+1;
		printf("\nIntroduzca un numero entero: ");
		scanf("%d",&x);
	}
	printf("%d,%d",y,i);
	z=y/i;
	printf("\n\nEl promedio de los numeros es de: %.2f",z);
	printf("\n\n");
	system("pause");
	return 0;
}
