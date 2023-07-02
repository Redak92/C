#include <stdio.h>
#include <stdlib.h>
int main() {
long big = 0;
int ajout;
printf("big vaut %ld, faîtes le grossir : \n", big);
scanf("%d", &ajout);
big = ajout+++big; /* problème de valeurs, c'est ++big ou ++ajout ? La solution serait de marquer un espace : ajout++ + big*/
printf( "%d", ajout);
printf("big vaut %ld !\n", big);
exit(EXIT_SUCCESS);
}