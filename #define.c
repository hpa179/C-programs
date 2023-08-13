/*#include <stdio.h>

#define PI 3.14

int main(){
    printf("%d", PI);
}*/

#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
   printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));
}