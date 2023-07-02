#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int esgi_strlen(char tab[]){
    
    int index = 0;
    
    while (tab[index] !='\0'){
        
        index++;
        
    }
    return index;
    
}

void esgi_strcpy(char destination[],char source[]){
    
    int index = 0;
    while(source[index] != '\0'){
        destination[index] = source[index];
        index++;
    }
    
    destination[index] = '\0';
}

void esgi_strcat(char destination[],char source[]){
    int index = 0,index2 = 0;
    
    while(destination[index] != '\0'){ index++; }
    while (source[index2] != '\0'){
        destination[index+index2] = source[index2];
        index2++;
        
    }
    
    
    
}

int esgi_strcmp(char source[],char destination[]){
    
    int lenmax = esgi_strlen(source) > esgi_strlen(destination) ? esgi_strlen(source) : esgi_strlen(destination);
    
    for(int i = 0;i != lenmax;i++){
        
        if(source[i] == destination[i]){ continue; }
        
        if(source[i] > destination[i]){ return 1; }        
        
        if(source[i] < destination[i]){ return -1; }

    }
    return 0;
}

int main() {
    
char texte[] = "Welcome to ESGI !";
char hello[] = "Hello";
char copie[50];
printf("esgi_strlen(\"%s\") = %d\n", texte, esgi_strlen(texte)); // Strlen

//Copie 
esgi_strcpy(copie, "Eleve, ");
printf("copie = \"%s\"\n", copie);

esgi_strcat(copie, texte);
printf("copie = \"%s\"\n", copie);
printf("esgi_strcmp(\"Hello\", \"Hello\") = %d = 0\n",esgi_strcmp(hello, "Hello"));
printf("esgi_strcmp(\"Hello\", \"Bonjour\") = %d > 0\n",esgi_strcmp(hello, "Bonjour"));
printf("esgi_strcmp(\"Hello\", \"Hell\") = %d > 0\n",esgi_strcmp(hello, "Hell"));
printf("esgi_strcmp(\"Bonjour\", \"Hello\") = %d < 0\n",esgi_strcmp("Bonjour", hello));

exit(EXIT_SUCCESS);
}