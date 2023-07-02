#include <stdio.h>
#include <stdlib.h>
int main() {
float x = 0;
float y = (x - 1) * (x - 1) / (x + 1);
printf("f(%f) = %f\n", x, y);
x = 1;
y = (x - 1) * (x - 1) / (x + 1);
printf("f(%f) = %f\n", x, y);
x = 5;
y = (x - 1) * (x - 1) / (x + 1);
printf("f(%f) = %f\n", x, y);
exit(EXIT_SUCCESS);
}
