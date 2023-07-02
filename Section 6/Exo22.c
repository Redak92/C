#include <stdio.h>
#include <stdlib.h>

int note = 0;
float somme = 0,temp = 0;
float moy(){
	printf("Entrez un nombre positif\n");
	scanf("%f",&temp);
	note +=1;
	somme += temp;
	while ( temp > 0){
		return moy();
	}
	++somme;
	--note;
	return somme / (float)note ;
	
}
int main() {
	printf("La moyenne est de :  %f \n",moy());

return 0;
}