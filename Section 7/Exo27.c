    #include <stdlib.h>
    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
    #include <math.h>
    
    
    float moy_tab(int tab[],int taille){
        if(taille == 0){ return 0; }
        float result = 0;
        
        for(int i = 0;i < taille;i++){
            result+=tab[i];
            
        }
        return result/taille;
    }
    float variance(int tab[],int taille, float moyenne){
        if(taille == 0){ return 0; }
    
        float result = 0;
        
        for(int i = 0;i < taille;i++){
            result+=(tab[i] - moyenne) * (tab[i] - moyenne);
            
        }
        return result/taille;
    }
    
    float ecart_type(float variance){
        
        return sqrt(variance);
    }
    
    
    void aff_tab(int tab[], int taille){
        printf("[");
        for(int i = 0;i < taille;i++){
            printf("%d",tab[i]);
            if(i != taille - 1){printf(", ");}
        }
        printf("]\n");
    
    }
    
    int research(int value,int tab[],int taille){
        
        for(int i = 0;i < taille;i++){
            if(tab[i] == value){
                printf("%d trouvé à l'indice %d\n",value,i);
                return 1;
            }
        }
        printf("Valeur non trouvée dans le tableau\n");
        return 0;
    }
    int minimum(int tab[],int taille){
        if(taille == 0){ return -1; }
    
        int min = tab[0];
        for(int i = 1;i < taille;i++){
            if(tab[i] < min) { min = tab[i]; }
        }
        return min;
    }
    int maximum(int tab[],int taille){
        if(taille == 0){ return -1; }
    
        int min = tab[0];
        for(int i = 1;i < taille;i++){
            if(tab[i] > min) { min = tab[i]; }
        }
        return min;
    }
    
void trier(int tableau[], int taille) {
    int i, j, min, temp;
  
    for (i = 0; i < taille - 1; i++) {
        min = i;
        for (j = i + 1; j < taille; j++) {
            if (tableau[j] < tableau[min]) {
                min = j;
            }
        }
        
        
        temp = tableau[min];
        tableau[min] = tableau[i];
        tableau[i] = temp;
    }
}
float n_quartile(int quartile, int tab[], int taille) {
    int tried[taille];
    memcpy(tried, tab, taille * sizeof(int));
    trier(tried, taille);
    
    switch(quartile){
        
        case 1:
            int w1 = taille % 4;
            int w2 = 4 - w1;
            float result = (w2 * tried[taille/4] + w1 * tried[(taille/4) +1]) / 4;
            return result;
        case 2:

            if(taille % 2 == 0){
                return (float)((tried[taille/2] + tried[(taille - 1)/2])/2);
            }else{
                return tried[taille/2];
            }
        case 3:
           /* int w3 = (taille*3) % 4;
            int w4 = 4 - w3;
            float result1 = (w4 * tab[(taille * 3)/4] + w3 * tab[((taille * 3)/4) +1]) / 4;
            return result1; */
            return tried[(((taille*3)/4)-1)];


    }
}

    void jouer(){
    	{
    	int donnees[10000];
    	char choix[20];
    	int valeur,cpt = 0;
		printf("-Ajouter [VALEUR] \n-Supprimer \n-Rechercher [VALEUR] \n-Afficher \n-Statistiques \n-Trier \n-Quitter \n");
    	while(strcmp(choix,"quitter") != 0){
    	printf("Entrez votre choix:");
    	if(scanf(" %19s", choix) != 1){
    	    exit(EXIT_FAILURE);
    	}
    	
    	if(strcmp(choix,"ajouter") == 0){
    	    if(scanf(" %d",&valeur) != 1) { while(getchar() != '\n'); printf("Erreur de syntaxe\n"); }
    	    donnees[cpt] = valeur;
    	    cpt++;
    	}else if(strcmp(choix,"supprimer") == 0){
    	    if(cpt == 0){
    	        printf("Désolé, le tableau est déjà vide\n");
    	        continue;
    	    }
    	    cpt--;
    	}else if(strcmp(choix,"rechercher") == 0){
    
    	    if(scanf(" %d",&valeur) != 1) { while(getchar() != '\n'); printf("Erreur de syntaxe\n"); }
            research(valeur,donnees,cpt);
    
    	}else if(strcmp(choix,"afficher") == 0){
    	    aff_tab(donnees,cpt);
    
    	}else if(strcmp(choix,"stat") == 0){
    	   printf("Moyenne : %g\n",moy_tab(donnees,cpt));
    	   printf("Ecart type: %g\n",ecart_type(variance(donnees,cpt,moy_tab(donnees,cpt))));
    	   printf("Minimum: %d\n",minimum(donnees,cpt));
    	   printf("Maximum: %d\n",maximum(donnees,cpt));
    	   printf("Premier quartile: %g\n",n_quartile(1,donnees,cpt));
    	   printf("Médiane: %g\n",n_quartile(2,donnees,cpt));
    	   printf("Troisième quartile: %g\n",n_quartile(3,donnees,cpt));


    	}else if(strcmp(choix,"trier") == 0){
    	    trier(donnees,cpt);
    	    
    	}else{
    	    printf("Désolé je n'ai pas compris, reessayez !\n");
    	    while(getchar() != '\n');
    	    continue;
    	}
    	
    	
    	}
    	
    	aff_tab(donnees,cpt);
    	
    	
    }
    	
    }
    
    int main(){
    	
    	jouer();
    	return 0;
    }
