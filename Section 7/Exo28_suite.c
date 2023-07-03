#include <stdio.h>

void multiplyMatrix(int a[2][2], int b[2][2]) {
    // Multiplication de deux matrices 2x2
    int result[2][2];
    result[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    result[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    result[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    result[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    
    // Mise à jour de la matrice a avec le résultat
    a[0][0] = result[0][0];
    a[0][1] = result[0][1];
    a[1][0] = result[1][0];
    a[1][1] = result[1][1];
}

void powerMatrix(int matrix[2][2], int n) {
    // Initialisation d'une matrice identité
    int result[2][2] = {{1, 0}, {0, 1}};
    
    while (n > 0) {
        if (n % 2 == 1) {
            multiplyMatrix(result, matrix); // Multiplication de la matrice result par la matrice matrix
        }
        multiplyMatrix(matrix, matrix); // Multiplication de la matrice matrix par elle-même
        n /= 2; // Division de n par 2 :)
    }
    
    // Mise à jour de la matrice matrix avec le résultat
    matrix[0][0] = result[0][0];
    matrix[0][1] = result[0][1];
    matrix[1][0] = result[1][0];
    matrix[1][1] = result[1][1];
}

int fibonacci(int n) {
    if (n <= 1){
        return n; // Retourne directement n si n est inférieur ou égal à 1 (cas de base)
    }
    
    // Matrice de base pour le calcul de Fibonacci
    int matrix[2][2] = {{1, 1}, {1, 0}};
    powerMatrix(matrix, n - 1); // Élève la matrice à la puissance n-1
    
    // Retourne le premier élément de la matrice résultante
    return matrix[0][0];
}

int main() {
    int terms = 10; // nombre de termes à afficher
    
    printf("Suite de Fibonacci :\n");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i)); // Affiche le i-ème terme de la suite de Fibonacci :)
    }
    
    return 0;
}
//Quel plaisir de commenter, merci pour ça monsieur
