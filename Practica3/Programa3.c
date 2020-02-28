#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("Color b4");
	char x;
	printf("Escriba un caracter: ");
	x=getchar();
	int a= (int)x;
	if(a>=48 && a<=57)
	{
		printf("\nEs un caracter numerico.\n");
	}
	else
	{
		if(a>=65 && a<=90)
		{
			printf("\nEs un caracter alfanumerico en mayuscula.\n");
		}
		else
		{
			if(a>=97 && a<=122)
			{
				printf("\nEs un caracter alfanumerico en minuscula.\n");
			}
			else
			{
				printf("\nEs un simbolo.\n");
			}
		}
	}
	return 0;
}
