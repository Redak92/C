#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Fonction personnalisée pour calculer la longueur d'une chaîne de caractères
int esgi_strlen(char tab[]) {
    int index = 0;

    // Parcourt la chaîne jusqu'à trouver le caractère nul '\0'
    while (tab[index] != '\0') {
        index++;
    }

    return index;  // Retourne la longueur de la chaîne
}

// Fonction personnalisée pour copier une chaîne dans une autre
void esgi_strcpy(char destination[], char source[]) {
    int index = 0;

    // Copie les caractères de la source vers la destination jusqu'à trouver le caractère nul '\0'
    while (source[index] != '\0') {
        destination[index] = source[index];
        index++;
    }

    destination[index] = '\0';  // Ajoute le caractère nul à la fin de la destination
}

// Fonction personnalisée pour concaténer une chaîne à une autre
void esgi_strcat(char destination[], char source[]) {
    int index = 0, index2 = 0;

    // Trouve la position du caractère nul dans la destination
    while (destination[index] != '\0') {
        index++;
    }

    // Copie les caractères de la source à partir de la position du caractère nul dans la destination
    while (source[index2] != '\0') {
        destination[index + index2] = source[index2];
        index2++;
    }

    destination[index + index2] = '\0';  // Ajoute le caractère nul à la fin de la destination
}

// Fonction personnalisée pour comparer deux chaînes de caractères
int esgi_strcmp(char source[], char destination[]) {
    int lenmax = esgi_strlen(source) > esgi_strlen(destination) ? esgi_strlen(source) : esgi_strlen(destination);

    for (int i = 0; i != lenmax; i++) {
        if (source[i] == destination[i]) {
            continue;  // Les caractères sont identiques, continue à la prochaine itération
        }

        if (source[i] > destination[i]) {
            return 1;  // La source est plus grande que la destination
        }

        if (source[i] < destination[i]) {
            return -1;  // La source est plus petite que la destination
        }
    }

    return 0;  // Les chaînes sont identiques
}

int main() {
    char texte[] = "Welcome to ESGI !";
    char hello[] = "Hello";
    char copie[50];

    printf("esgi_strlen(\"%s\") = %d\n", texte, esgi_strlen(texte)); 

    // Copie
    esgi_strcpy(copie, "Eleve, "); 
    printf("copie = \"%s\"\n", copie);

    esgi_strcat(copie, texte); 
    printf("copie = \"%s\"\n", copie);

    printf("esgi_strcmp(\"Hello\", \"Hello\") = %d = 0\n", esgi_strcmp(hello, "Hello"));  
    printf("esgi_strcmp(\"Hello\", \"Bonjour\") = %d > 0\n", esgi_strcmp(hello, "Bonjour"));
    printf("esgi_strcmp(\"Hello\", \"Hell\") = %d > 0\n", esgi_strcmp(hello, "Hell"));
    printf("esgi_strcmp(\"Bonjour\", \"Hello\") = %d < 0\n", esgi_strcmp("Bonjour", hello));

    exit(EXIT_SUCCESS); 
}
