#include <stdio.h>
#include <stdlib.h>

int main() {
int age;
printf("Entrez votre age");
scanf("%d",&age);
if(age>=18 && age<=25) {
	printf("Vous êtes dans les 18-25");
} else {
	printf("Vous n'êtes pas dans les 18-25");
}
return 0;
}