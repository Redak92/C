#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n; // Retourne directement n si n est inférieur ou égal à 1 (cas de base)
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Calcul récursif de Fibonacci pour les autres valeurs de n
}

void fibtab(int n){
    int tab[100] = {0,1}; // Tableau pour stocker les termes de la suite de Fibonacci
    
    for(int i = 2; i < n + 2; i++){
        tab[i] = tab[i - 1] + tab[i - 2]; // Calcul du terme courant en additionnant les deux termes précédents
        if(i > 2){
            printf(", "); // Affichage de la virgule séparant les termes à partir du troisième terme
        }
        printf("%d", tab[i]); // Affichage du terme courant
    }
}

}

int main() {
    // Le main :)
}
