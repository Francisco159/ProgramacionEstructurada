#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color 0c");
	float y,z,res;
	char x;
	printf("Escriba el simbolo correspondiente a la operacion que desea realizar (+,-,/,*):\n");
	scanf("%c",&x);_flushall();
	printf("Escriba el primer numero:\n");
	scanf("%f",&y);
	printf("Escriba el segundo numero:\n");
	scanf("%f",&z);
	switch(x)
	{
		case '+':
			res=y+z;
			printf("\n%.2f %c %.2f = %.2f\n\n",y,x,z,res);
			break;
		case '-':
			res=y-z;
			printf("\n%.2f %c %.2f = %.2f\n\n",y,x,z,res);
			break;
		case '*':
			res=y*z;
			printf("\n%.2f %c %.2f = %.2f\n\n",y,x,z,res);
			break;
		case '/':
			res=y/z;
			printf("\n%.2f %c %.2f = %.2f\n\n",y,x,z,res);
			break;
		default:
			printf ("\nOperacion invalida.\n\n");
	}
	system("Pause");
	return 0;
}
