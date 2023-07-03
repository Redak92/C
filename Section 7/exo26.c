#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour le chiffrement César d'un caractère
void cesar(int k, char c) {
    char d;

    // Vérifie si le caractère est un chiffre entre '0' et '9'
    if ('0' <= c && c <= '9') {
        d = (((c - '0' + k) % 10 + 10) % 10) + '0';  // Effectue le décalage modulo 10
    }
    // Vérifie si le caractère est une lettre minuscule entre 'a' et 'z'
    else if ('a' <= c && c <= 'z') {
        d = (((c - 'a' + k) % 26 + 26) % 26) + 'a';  // Effectue le décalage modulo 26
    }
    // Vérifie si le caractère est une lettre majuscule entre 'A' et 'Z'
    else if ('A' <= c && c <= 'Z') {
        d = (((c - 'A' + k) % 26 + 26) % 26) + 'A';  // Effectue le décalage modulo 26
    }
    // Si le caractère n'est pas alphanumérique, le laisse inchangé
    else {
        d = c;
    }

    printf("%c", d);  // Affiche le caractère chiffré
}

// Fonction pour le chiffrement de Vigenère
void vigenere(char source[], char key[]) {
    int index = 0, idx = 0;
    char message[strlen(source)];

    while (source[index] != '\0') {
        // Vérifie si le caractère n'est pas alphanumérique
        if (!((source[index] >= 'a' && source[index] <= 'z') || (source[index] >= '0' && source[index] <= '9') ||
              (source[index] >= 'A' && source[index] <= 'Z'))) {
            printf("%c", source[index]);  // Affiche le caractère tel quel
            index++;
            continue;
        }

        // Effectue le chiffrement César pour le caractère en utilisant le décalage basé sur la clé
        if (key[idx] >= 'A' && key[idx] <= 'Z') {
            cesar((key[idx] - 'A') * -1, source[index]);
        } else if (key[idx] >= 'a' && key[idx] <= 'z') {
            cesar((key[idx] - 'a') * -1, source[index]);
        } else if (key[idx] >= '0' && key[idx] <= '9') {
            cesar((key[idx] - '0') * -1, source[index]);
        }

        idx++;
        if (idx > strlen(key) - 1) {
            idx = 0;  // Réinitialise l'index de la clé si on a atteint la fin de la clé
        }

        index++;
    }
}

int main() {
    char tab[] = "Fgtrsmx mxmjqefz li d’KAKA, swm u’kax Gykej, zc tjknijka pw rirygoi U uc Tqzpsf ?"; // LE PYTHON 
    char key[] = "ESGI";

    vigenere(tab, key);  // Appelle la fonction de chiffrement de Vigenère avec la chaîne et la clé

    return 0;
}
