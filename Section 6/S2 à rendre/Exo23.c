#include <stdio.h>
#include <stdlib.h>


/* Debut de votre code : */
long addInt(int nb1,int nb2) { return nb1 + nb2; }
long subInt(int nb1,int nb2) { return nb1 - nb2; }
long mulInt(int nb1,int nb2) { return nb1 * nb2; }

double divInt(int nb1,int nb2){
    if(nb2 == 0) { printf("Impossible de diviser par zéro"); }
    return (float)nb1/nb2;
}

int modInt(int nb1,int nb2){
    if(nb2 == 0) { printf("Impossible de diviser par zéro"); }
    return nb1 % nb2;
}

long int powInt(int nb1,int nb2){
    if(nb2 == 0) { return 1; }
    int cpt = 1,result = 0;
    
    while(cpt != nb2){
        result += nb1 * nb1;
        cpt++;
    }
    return result;
}

int scanInt(){
    int res;
    scanf(" %d",&res);
    return res;
}

int scanOp(){
    char res;
    scanf(" %c",&res);
    return res;
}

/* Fin de votre code. */


    void compute(int first, char op, int second) {
        switch(op) {
            case '+' :
                printf(" = %ld\n", addInt(first, second));
                break;
            case '-' :
                printf(" = %ld\n", subInt(first, second));
                break;
            case '*' :
                printf(" = %ld\n", mulInt(first, second));
                break;
            case '/' :
                printf(" = %lg\n", divInt(first, second));
                break;
            case '%' :
                printf(" = %d\n", modInt(first, second));       
                break;
            case '^' :
                printf(" = %ld\n", powInt(first, second));
                break;
    }
    
}


int main() {
    int first, second;
    char op;
    
    printf(">>> ");
    first = scanInt();
    
    op = scanOp();
    
    second = scanInt();
    compute(first, op, second);
    return main();
    

}