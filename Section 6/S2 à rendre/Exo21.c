
#include <stdio.h>
#include <stdlib.h>


float moyenne(){
    float nb = 0,result = 0;
    int cpt = 0;
    printf("Entrez des nombres");
    scanf(" %f",&nb);
    while (nb >= 0){
        result+= nb;
        cpt++;
        scanf(" %f",&nb);

    }
    if (result == 0) { return 0; }
    return result/cpt;
}

int main()
{
    printf("%g",moyenne());

    return 0;
}
