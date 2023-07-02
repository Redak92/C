#include <stdlib.h>
#include <stdio.h>

int main () {

unsigned long gros_nombre;
printf("Entrez un gros nombre : ");
scanf("%lu",&gros_nombre);
printf("%lu, un gros nombre ?\n", gros_nombre);
gros_nombre = 0xffffffffffffffff;
printf("%lu, un gros nombre !\n, Regardes : %lx", gros_nombre,gros_nombre);

return 0;
}




/* 

1) unsigned long

2) L11

3) Si on fait +1 à gros_nombre, on obtient 0

4) La mémoire limite le stockage du nombre.

*/