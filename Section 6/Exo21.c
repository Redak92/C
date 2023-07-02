#include <stdio.h>
#include <stdlib.h>

int menu() {
	int choice;
	printf("Entrez votre choix");
	scanf ("%d",&choice);
	if (choice != 1 && choice != 2 && choice != 3) {
		return menu();
	}else {
	return choice;
	}
	
}



int main() {
	printf("Bien reçu : %d",menu());






return 0;
}