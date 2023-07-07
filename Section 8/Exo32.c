#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** menu() {
    char* input; 
    char* content;

    printf("Actions possibles :\n");
    printf("- ajouter [mot]\n");
    printf("- supprimer [mot]\n");
    printf("- rechercher [mot]\n");
    printf("- afficher\n");
    printf("- quitter\n");

    printf(">>>\n");
    scanf("%ms", &input); // On remplit dynamiquement le tableau d'input : malloc mais sans se faire chier
    
    if(strcmp(input,"quitter") == 0){
        
        free(input);
        free(content);
        exit(EXIT_SUCCESS);
    } else if(strcmp(input,"afficher") == 0){
        content = (char*)malloc(1 * sizeof(char));
        strcpy(content, "\0");
        while(getchar() != '\n');
    } else { 
        scanf("%ms", &content); //Pareil pour content
    }
    
    char** results = (char**)malloc(2 * sizeof(char*)); 
    results[0] = input;
    results[1] = content;

    return results;
}


void ajouter(char ** tab, char data[], int taille){ 
    
    tab = (char**)realloc(tab, (taille + 1) * sizeof(char*)); // Realloc avec une taille en plus
    
    tab[taille] = (char*)malloc((strlen(data) + 1) * sizeof(char*));
    
    snprintf(tab[taille],strlen(data) + 1,"%s",data);
    
    printf("Ajouté !\n");
    
}

void afficher(char ** tab, int taille){ 
    printf("Valeurs dans le tableau ( Taille : %d ): \n",taille);
    for(int i = 0;i < taille;i++){
        printf("%s", tab[i]);
        if(i != taille - 1) { printf(", ");}
    }
    printf("\n");
}

void rechercher(char ** tab,char data[], int taille){
    for(int i = 0;i < taille;i++){
        if(strcmp(tab[i],data) == 0){
            printf("%s trouvé (Indice : %d)\n",tab[i],i);
            return;
        }
    }
    printf("%s non trouvé.\n", data);
}

int supprimer(char **tab, char data[], int taille){
    int cpt = 0;
    for(int i = 0; i < taille; i++){
        if(strcmp(tab[i], data) == 0){
            
            cpt++;
        } else {
            strcpy(tab[i - cpt], tab[i]);

        }
    }
    
    tab = (char**)realloc(tab, (taille - cpt) * sizeof(char*));
    
    if(cpt == 0){
        printf("Aucune donnée à supprimer\n");
    } else {
        printf("%s supprimé\n", data);
    }
    
    return cpt;
}


void secretariat(){ // Somewhy je ne sais pas pourquoi elle veux pas appeler des fonctions après 4 valeurs ajoutées (en tout cas afficher,supprimer et rechercher) 
    
    char ** stock = (char**)malloc(0 * sizeof(char*));
    
    int taille = 0;
    
    while(1){
        char** a = menu();
        
    
    if (strcmp(a[0], "ajouter") == 0) {
        ajouter(stock,a[1],taille);
        taille++;
    }
    else if (strcmp(a[0], "supprimer") == 0) {
        taille -= supprimer(stock,a[1],taille);
    }
    else if (strcmp(a[0], "rechercher") == 0) {
        rechercher(stock,a[1],taille);
    }
    else if (strcmp(a[0], "afficher") == 0) {
        afficher(stock,taille);
    }
    else if (strcmp(a[0], "quitter") == 0) {
        free(a[0]);
        free(a[1]);
        free(a);
        return;
    }
    else {
        printf("Action non reconnue.\n");
    }
    free(a[0]);
    free(a[1]);
    free(a);
    }

   
}


int main() {
    
    secretariat(); 

    return 0;

}

//Qu'il aille se faire foutre cet exo il m'a pris une après midi pour pas bien marcher en plus

