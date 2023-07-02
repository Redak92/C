#include <stdio.h>
#include <stdlib.h>

int main() {
	int nb,nb2,result;
	printf("Entrez deux nombres");
	scanf("%d %d",&nb,&nb2);
	while ( nb % nb2 != 0 ) {
		result = nb % nb2;
		nb = nb2;
		nb2 = result;
	}
printf("%d",result);	
	
return 0;
}

