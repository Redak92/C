#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	const int max = 1001;
	long nombre = rand()% max,b = -1;
	while (b != nombre) {
		printf("Entrez un nombre");
		scanf("%d",&b);
		if (b > nombre) {
			printf("Trop haut\n");
		}
		else {
			printf("Trop bas\n");	
			
		}
	}
	


return 0;	
}
