#include <stdio.h>
#include <stdlib.h>
int main() {
	int age;
	printf("Entrez votre âge");
	scanf("%d",&age);
	if(age <= 14){
		printf ("Vous êtes un enfant");
	} else if( age< 25){
		printf ("Vous êtes un adolescent");
	} else if(age < 64){
		printf ("Vous êtes un adulte");
	} else {
		printf ("Vous êtes un aîné");
	}
	

return 0;
}