// GUIBERT Bastien 1IJ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jeu_du_nombre(){
	int nb_demande = -1,temp,rep=0,erreur=0;
	srand(time(NULL));
	const int max = 1001;
	int nombre = rand() % max;
	
	
	printf("Choisissez un nombre entier entre 1 et 1000");
	while(nb_demande != nombre){ // On s'arrêtera quand le nombre sera trouvé
		temp = nb_demande;
		printf("\n >>>");
		if(scanf(" %d",&nb_demande) != 1 || (nb_demande< 1 ||nb_demande > 1000)) {  //Sécurité qui empêche de spammer les saisies incorrectes(Seulement les saisies de à la suite, rentrer une saisie correcte reset le compteur d'erreurs 
			
			while(getchar() != '\n') {}
			printf("S'il vous plaît, entrez un nombre valide");
			erreur++;
			if(erreur == 6) { printf("\nJ'EN AI MARRE"); exit(EXIT_SUCCESS); }
			continue;
		}
		
		if(nb_demande > nombre) { printf("Trop haut"); } //Condition de base pour indiquer à l'utilisateur si il est trop bas ou trop haut
		
		else if (nb_demande < nombre) {printf("Trop bas"); }
		
		if(temp == nb_demande){ rep++;} // On a stocké l'ancienne valeur saisie, pour vérifier si c'est la même que celle que l'utilisateur vient de saisir, sinon il spam la même réponse, il reçoit un avertissement,puis un deuxième, puis stop. 
		else{ rep = 0; }
		switch(rep){
			case 3:
				printf("\nTu n'as pas compris ? Tu as déjà entré ce nombre et c'est %s\n",nb_demande > nombre ? "trop haut":"trop bas");
				break;
			case 5:
				printf("\nDernier avertissement !\n");
				break;
			case 6:
				printf("\nBon,j'en ai marre, au revoir\n");
				exit(EXIT_SUCCESS);
			
				
		}	
		erreur = 0;	
		
		
	}
	
	printf("Bravo !");
	
	
}


int main() {
	
	jeu_du_nombre();
	




	exit(EXIT_SUCCESS);
	
}