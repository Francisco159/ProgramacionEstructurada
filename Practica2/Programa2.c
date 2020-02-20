#include<stdio.h>
#include<stdbool.h>
int a=2,b=1,c;
float d=2.3,e=2.5,f;
double g=4.5,h=5.7,k;
bool r;
int main()
{
	system("Color 0c");
	printf("OPERACIONES CON ENTEROS (INT)");
	c=a+b;
	printf("\n%d + %d = %d",a,b,c);
	c=a-b;
	printf("\n%d - %d = %d",a,b,c);
	c=a*b;
	printf("\n%d * %d = %d",a,b,c);
	c=a/b;
	printf("\n%d / %d = %d",a,b,c);
	c=a%b;
	printf("\n%d %% %d = %d",a,b,c);
	r=a<b;
	printf("\n%d < %d = %d",a,b,r);
	r=a<=b;
	printf("\n%d <= %d = %d",a,b,r);
	r=a>b;
	printf("\n%d > %d = %d",a,b,r);
	r=a>=b;
	printf("\n%d >= %d = %d",a,b,r);
	
	printf("\n\nOPERACIONES CON REALES (FLOTANTES)");
	f=d+e;
	printf("\n%f + %f = %f",d,e,f);
	f=d-e;
	printf("\n%f - %f = %f",d,e,f);
	f=d*e;
	printf("\n%f * %f = %f",d,e,f);
	f=d/e;
	printf("\n%f / %f = %f",d,e,f);
	r=d<e;
	printf("\n%f < %f = %d",d,e,r);
	r=d<=e;
	printf("\n%f <= %f = %d",d,e,r);
	r=d>e;
	printf("\n%f > %f = %d",d,e,r);
	r=d>=e;
	printf("\n%f >= %f = %d",d,e,r);
	
	printf("\n\nOPERACIONES CON REALES (DOUBLE)");
	k=g+h;
	printf("\n%f + %f = %f",g,h,k);
	k=g-h;
	printf("\n%f - %f = %f",g,h,k);
	k=g*h;
	printf("\n%f * %f = %f",g,h,k);
	k=g/h;
	printf("\n%f / %f = %f",g,h,k);
	r=g<h;
	printf("\n%f < %f = %d",g,h,r);
	r=g<=h;
	printf("\n%f <= %f = %d",g,h,r);
	r=g>h;
	printf("\n%f > %f = %d",g,h,r);
	r=g>=h;
	printf("\n%f >= %f = %d",g,h,r);
	
	printf("\n\nOPERACIONES CON CARACTERES");
	a=(int)'m';
	b=(int)'n';
	c=a+b;
	printf("\n%d + %d = %d",a,b,c);
	c=a-b;
	printf("\n%d - %d = %d",a,b,c);
	c=a*b;
	printf("\n%d * %d = %d",a,b,c);
	c=a/b;
	printf("\n%d / %d = %d",a,b,c);
	c=a%b;
	printf("\n%d %% %d = %d",a,b,c);
	r=a<b;
	printf("\n%d < %d = %d",a,b,r);
	r=a<=b;
	printf("\n%d <= %d = %d",a,b,r);
	r=a>b;
	printf("\n%d > %d = %d",a,b,r);
	r=a>=b;
	printf("\n%d >= %d = %d",a,b,r);
	
	printf("\n\nOPERACIONES CON BOLEANOS (BOOL)");
	a=3;
	b=5;
	r=a<b;
	printf("\n%d < %d = %d",a,b,r);
	r=a<=b;
	printf("\n%d <= %d = %d",a,b,r);
	r=a>b;
	printf("\n%d > %d = %d",a,b,r);
	r=a>=b;
	printf("\n%d >= %d = %d",a,b,r);
	r=(a<b) && (a<=b);
	printf("\n(%d < %d )&& (%d <= %d) = %d",a,b,a,b,r);
	r=(a>b) || (a>=b);
	printf("\n(%d > %d) || (%d >= %d) = %d",a,b,a,b,r);
	r=!(a<b);
	printf("\n!(%d < %d) = %d",a,b,r);
	printf("\n\n");
	system("Pause");
	return 0;
	
}
