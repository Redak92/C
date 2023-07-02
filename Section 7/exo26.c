#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cesar(int k, char c){
	char d;
	
	
	
	
		if('0' <= c && c <= '9') {
		
			d = (((c - '0' + k) % 10 + 10) % 10) + '0';
			
		} else if('a' <= c && c <= 'z') {
		
			d = (((c - 'a' + k) % 26 + 26) % 26) + 'a';
			
		} else if('A' <= c && c <= 'Z') {
		
			d = (((c - 'A' + k) % 26 + 26) % 26) + 'A';
			
		} else {
		
			d = c;
		}
		
		printf("%c", d);
		

}
void vigenere(char source[],char key[]){
    
    int index = 0,idx = 0;
    char message[strlen(source)];
    
    
    
    while(source[index] != '\0'){
        if (!((source[index] >= 'a' && source[index] <='z') || (source[index] >= '0' && source[index] <= '9') || (source[index] >='A' && source[index] <= 'Z'))){
          printf("%c",source[index]) ;
          index++;
          continue;
        }
        
        if(key[idx]>= 'A' && key[idx] <= 'Z'){
            cesar((key[idx] - 'A')* -1,source[index]);
        }
        else if(key[idx]>= 'a' && key[idx] <= 'z'){
            cesar((key[idx] - 'a') * -1,source[index]);
        }else if(key[idx]>= '0' && key[idx] <= '9'){
            cesar((key[idx] - '0') * -1,source[index]);
        }
        
        idx++;
        if(idx>strlen(key)-1){ idx = 0; }
        
        index++;
        
    }
    
    
    
}
int main() {
	
    char tab[] = "Fgtrsmx mxmjqefz li d’KAKA, swm u’kax Gykej, zc tjknijka pw rirygoi U uc Tqzpsf ?";
    char key[] = "ESGI";
    
    vigenere(tab,key);
	
	
}