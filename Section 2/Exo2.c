/* GUIBERT Bastien
 import studio            -> il manque le #, le .h et stdio est mal écrit. Il manque aussi stdlib.h . include au lieu de import.
 
def main :                -> int au lieu de def, {} requises, pas de : , () après main 
pi <- 3,14                -> déclarer une variable, puis l'assigner
print(pi)				  -> "" pour ce qui doit être affiché, on doit %... puis mettre la variable après une virgule
# Pourquoi ça n'affiche pas pi ???
exit()                    -> return 0;

; oubliés partout
*/


#include <stdlib.h>
#include <stdio.h>

int main () {
	
	double pi = 3.14159265359;
	printf("%.3f, ou %e",pi,pi);
	
return 0;
}
		