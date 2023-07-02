#include <stdio.h>
#include <stdlib.h>

int main () {

float first, second;

printf("Entrez deux nombres");
scanf("%f %f", &first, &second);

printf ( "%g + %g = %g, %g - %g = %g , %g*%g =%g", first,second,first+second,first,second,first - second,first,second, first*second);
return 0;
}