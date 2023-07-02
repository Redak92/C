#include <stdio.h>
#include<stdlib.h>
void afficher(int vie_j,int att_j,int def_j,int vie_a,int att_a,int def_a ){
    printf("+---------------+---------------+\n");
    printf("|    Joueur     +   Adversaire  |\n");
    printf("+---------------+---------------+\n");
    printf("| Vie :%9d| Vie :%9d|\n",vie_j,vie_a);
    printf("| Attaque :%5d| Attaque :%5d|\n",att_j,att_a);
    printf("| Défense :%5d| Défense :%5d|\n",def_j,def_a);
    printf("+---------------+---------------+\n");

    
}


int menu(){
    int nb;
	printf("1 - Cogner \n2 - Se soigner \n3 - Augmenter l'attaque \n4 - Augmenter la défense \n");
    printf("Entrez votre choix\n >>>");
    if(scanf(" %d",&nb) != 1){
        while(getchar() != '\n'){}
        return menu();
    }
    while(getchar() != '\n') {}
    if (nb > 4 || nb < 1 ){ return menu(); }
    
    return nb;
}
void jouer(){
    int vie_j = 100,att_j = 50,def_j = 20,vie_a = 100,att_a = 50,def_a = 20;
    while(vie_j > 0 && vie_a > 0){
        afficher(vie_j,att_j,def_j,vie_a,att_a,def_a);
        switch(menu()){
            
            case 1:
                vie_a -= 50;
                printf("Le joueur cogne l'adversaire\n");
                
                afficher(vie_j,att_j,def_j,vie_a,att_a,def_a );
				break;
			case 2:
			    vie_j += def_j/10;
				printf("Le joueur se soigne\n");
				
				afficher(vie_j,att_j,def_j,vie_a,att_a,def_a );
				break;

			case 3:
			    att_j += 25;
				printf("Le joueur augmente son attaque\n");
				
				afficher(vie_j,att_j,def_j,vie_a,att_a,def_a );
				break;

			case 4:
				printf("Le joueur augmente sa défense\n");
				def_j += 10;
				afficher(vie_j,att_j,def_j,vie_a,att_a,def_a );
				break;

			default:
			
				return;
				
                
            
        }

}        printf("Bravo ! %s a gagné ! ", vie_a > vie_j ? "L'adversaire" : "Le joueur");

}
int main(){
    
    
    jouer();
    return 1;
}