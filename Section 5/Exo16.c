// GUIBERT Bastien, 1IJ
#include <stdio.h>
#include <stdlib.h>


void divis(){ // Fonction qui demande un nombre, et qui écrit tout ses diviseurs.
	int nb,diviseur= 1;
	char coef = '\0';
	printf("Entrez un nombre");
	if(scanf(" %d",&nb)!= 1){ // La classique, pour être (quasiment) sûrs d'avoir une entrée correcte
		while(getchar() != '\n'){}
		printf("Entrez un nombre valide\n");
		return divis();
	} 
	if ( nb == 0) {
		printf("Zéro à une infinité de diviseurs\n");
		return divis();
	}
	if (nb < 0) { coef = '-'; nb= -nb;} // Si le nombre est négatif, on le passe en positif mais on rajoute le préfixe
	while(diviseur <= nb){
		
		nb % diviseur == 0 ? printf("%c%d, ",coef,diviseur) : printf("");
		diviseur++;
	}
	printf("\b\b  "); // Franchement, on s'amuse bien
}


int main(){
	divis();
}