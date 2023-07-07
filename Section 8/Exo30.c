#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char nom[100], prenom[50];
    char *full_name;
    
    printf("Bonjour, entrez votre nom et prénom : ");
    scanf("%s %s", nom, prenom);
    
    full_name = (char *)malloc((strlen(nom) + strlen(prenom) + 2) * sizeof(char));  // Allocation dynamique de [TAILLE_NOM] + [TAILLE_PRENOM] + 2 (l'espace et le caractère de fin) le tout par 1 (la taille d'un char) 
    
    sprintf(full_name, "%s %s", nom, prenom);  // Permet la concaténation de nom et prénom

    printf("Vous êtes donc : %s !\n", full_name);
    
    free(full_name);
    exit(EXIT_SUCCESS);
}
