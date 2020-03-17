# include<stdio.h>
# include<stdlib.h>
int  main ()
{
	system ( " Color 0c " );
	
	int x=0, i=0;
	float y=0, z;
	
	do
	{
		y=y+x;
		i++;
		printf("Escribe un n%cmero entero positivo: ",163);
		scanf("%d",&x);
	}while(x >= 0);
	if(i > 0)
		i--;
		
	z=y/i;
	printf("\nEl promedio de los n%cmeros ingresados es: %.2f",163,z);
	
	printf ( "\n \n" );
	system ( " Pause " );
	return 0 ;
}
