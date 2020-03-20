#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color 0c");
	
	/*Declaracion de variables*/
	int i,num,j,r,k,x=0,z=0;
	
	/*Lectura de datos*/
	do
	{
		printf("Escriba un n%cmero entero que est%c entre 0 y 100: ",130,160);
		scanf("%d",&num);
	}while(num<0 || num>100);
	
	int M[num];
	
	/*Proceso para guardar los numeros primos en el arreglo*/
	for(i=1;i<=num;i++)
	{
		j=1;
		k=0;
		while(j<=i)
		{
			r=i% j;
			
			if(r==0)
				k++;
				
			j++;
		}
	
		if(k==2 || k==1)
		{
			M[x]=i;
			z++;
		}			
		else
			M[x]=0;
		
		x++;
		
	}
	int a[z];
	x=0;
	for(i=0;i<num;i++)
	{
		if(M[i] == 0)
		{
			M[i]=0;
		}
		else
		{
			a[x]=M[i];
			x++;
		}
	}
	
	
	/*Impresion de datos*/
	system("cls");
	printf("Los n%cmeros primos que hay desde 1 hasta %d\n\n",163,num);
	for(i=0;i<z;i++)
	{
		printf("%d\n",a[i]);
	}
	
	/*Proceso para system pause*/
	printf("\n\n");
	system("Pause");
	return 0;
}
