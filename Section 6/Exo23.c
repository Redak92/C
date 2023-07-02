#include <stdio.h>
#include <stdlib.h>

long puissance(long a, long b){
	long compteur,val;
	val = a;
	for(compteur = 0;compteur <= b - 2;++compteur) {
		val *= a;
		
	}
	return val;

}


long puissance_rapide(long a, long b) {
	long result = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			result *= a;
			
		}
		a *= a;
		b /= 2;
		
	}
	return result;	

}
unsigned long mod(unsigned long a, unsigned long b, unsigned long c) {
	return puissance(a,b) % c;
}
unsigned long mod_fast(unsigned long a, unsigned long b, unsigned long c) {
	return puissance_rapide(a,b) % c;
}


int main () {
	printf("%lu\n",mod(42,2460320538,4285404239));
	printf("%lu",mod_fast(42,2460320538,4285404239));
	
	
return 0;
}

/*
4) La fonction mod_fast donne le résultat quasiment instantanément, tandis que la fonction mod met plusieurs
secondes à le trouver.
*/