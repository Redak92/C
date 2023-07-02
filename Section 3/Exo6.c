#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	c=0;
	printf("Entrez deux nombres");
	scanf("%d %d", &a,&b);
	printf ("%d\n", a+b);
	c = a ;
	a = b;
	b = c;
	printf("%d\n",a-b);
	
	long d;
	d = a*b;
	printf("%d\n",d);
	
	float x;
	x = (double)a / b;
	printf("%f",x);
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
return 0;
}