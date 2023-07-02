#include <stdio.h>
#include <stdlib.h>

int main() {
unsigned long message = 0x5c003212,p = 4285404239 , k = 2015201261 ;

printf("%lx", (message*k)%p);
return 0;
}