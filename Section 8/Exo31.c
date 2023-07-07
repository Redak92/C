#include <stdio.h>
#include <stdlib.h>

int** allouer_grille(int largeur, int hauteur) {  // Allocation d'un tableau à deux dimensions de hauteur x largeur
    int** grille = (int**)malloc(hauteur * sizeof(int*));
    for (int i = 0; i < hauteur; i++) {
        grille[i] = (int*)malloc(largeur * sizeof(int));
    }
    

    return grille;
}

void afficher(int** grille, int largeur, int hauteur) { //Affichage de la grille comme un tableau 2D classique
    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < largeur; j++) {
            printf("%c ", grille[i][j]);
        }
        printf("\n");
    }
}

void fill(int** grille, int largeur, int hauteur) { // Algorithmie permettant de remplir la grille
    
    for(int x = 0; x < hauteur;x++){ // Remplir la grille de -
        for(int y = 0;y < largeur;y++){
            grille[x][y] = '-';
        }
    }
    
    if (largeur == 1 && hauteur == 1){ // Cas de base
        grille[0][0] = '#';
        return;
    }

    for(int i = 0; i < hauteur / 2 + 1; i++){  // On traite les valeurs quatre par quatre
        for(int x = 0; x < largeur / 2 + 1; x++){
            if(i == x){
                grille[i][largeur - 1 - i] = '#';
                grille[i][x] = '#';
                grille[hauteur - 1 - i][x]  = '#';
                grille[hauteur - 1 - i][largeur - 1 - i] = '#';
                
                if(x == largeur / 2 && largeur < hauteur){
                    
                    int hori = i + 1;
                    
                    while(grille[hori][x] != '#'){
                        grille[hori][x] = '#';
                        hori++;
                    }
                }else if(i == hauteur / 2 && hauteur < largeur){
                    
                    int vert = x + 1;
                    
                    while(grille[i][vert] != '#'){
                        grille[i][vert] = '#';
                        vert++;
                    }
                }
            }
        }
    }
}

void free_grille(int*** grille, int largeur, int hauteur) { //Liberer la grille
    for (int i = 0; i < hauteur; i++) {
        free((*grille)[i]);
    }
    free(*grille);
    *grille = NULL;
}

int main() { 
    int largeur, hauteur;
    int ** grille = NULL;

    printf("Entrez largeur et hauteur de la grille : ");
    scanf("%d %d", &largeur, &hauteur);
    grille = allouer_grille(largeur, hauteur);

    fill(grille, largeur, hauteur);
    afficher(grille, largeur, hauteur);

    free_grille(&grille,largeur,hauteur);




    exit(EXIT_SUCCESS);
}
