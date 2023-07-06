#include <stdio.h>
#include <stdlib.h>
#define NB_MAISONS 7


    void afficher_maison(int *maison) {
    printf("%p -> %d \n",maison,*maison);
}

    void afficher_maisons(int * maisons, int nb){
    
        for(int i = 0;i < nb;i++){
            printf("[%d] : ", i );
            afficher_maison(&maisons[i]);
            
        }
}

    int * adresse_maison(int * maisons, int numero){
        
        return &maisons[numero];
    }
    
    
    int vider_maison(int * maison){
        
        int temp = *maison;
        *maison = 0;
        return temp;
        
    }
    
    void vider_camion(int * camion, int * maison){
        
        *maison += *camion;
        *camion = 0;
    }
    
    int main() {
        
        int * demenageur = NULL;
        int camion = 0;
        int maisons[NB_MAISONS];
        int i;
        
        for(i = 0; i < NB_MAISONS; ++i) {
            maisons[i] = i + 1;
        
    }
    
    afficher_maisons(maisons, NB_MAISONS);
    printf("camion -> %d\n", camion);
    
    
    demenageur = adresse_maison(maisons, 3);
    afficher_maison(demenageur);
    
    camion = vider_maison(demenageur);
    afficher_maison(demenageur);
    
    printf("camion -> %d\n", camion);
    demenageur = adresse_maison(maisons, 5);
    afficher_maison(demenageur);
    
    vider_camion(&camion, demenageur);
    afficher_maison(demenageur);
    
    printf("camion -> %d\n", camion);
    afficher_maisons(maisons, NB_MAISONS);
exit(EXIT_SUCCESS);



}







