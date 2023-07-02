#include <stdio.h>
#include <stdlib.h>

int main() {

int limitation,vitesse,ecart;

printf ("Entrez limitation et vitesse");
scanf ("%d %d",&limitation,&vitesse);
ecart = vitesse - limitation;

if(limitation < vitesse && ecart < 20 && limitation <= 50) {
	printf ("135e et -1 point");
}else if(ecart >= 20 && ecart < 30) {
	printf ("135e et -2 points");
}else if(ecart >= 30 && ecart < 40) {
	printf ("135e et -3 points");
}else if(ecart >= 40 && ecart < 50) {
	printf ("135e et -3 points");
}else if(ecart >50){
	printf ("1500e et -6 points");
}
return 0;
	}

