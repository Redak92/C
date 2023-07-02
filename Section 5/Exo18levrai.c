// GUIBERT Bastien 1IJ
#include <stdio.h>
#include <stdlib.h>

int dec_to_bin(){
	int cpt =  1,nb;
	printf("Entrez un nombre");
	if(scanf(" %d",&nb) != 1){
		while(getchar() != '\n'){ }
		printf("Rentrez un nombre valide\n");
		return dec_to_bin();
	}
	if(nb < 0) { nb = -nb; printf("( Complément à 2 )\n1");} // Pour faire le complément à 2, au cas où le nombre est négatif.
	while(cpt * 2 <= nb) { cpt *= 2; } // Pour avoir la plus grande puissance de 2 inférieure à nb
	while(cpt != 0){  // Tant que le compteur est différent de 0, on vérifie encore les puissances de 2 dans l'ordre décroissant
		if ( nb - cpt >= 0){
			printf("1");
			nb-= cpt;
		}else{
			printf("0");
			
		}
		cpt/=2;
	}
}

int main(){
	
	dec_to_bin();
	
}