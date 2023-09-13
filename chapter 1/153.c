#include <stdio.h>

int main(){
    int* a[3];
    char* b[3];
    double* c[3];

    printf("%d\n",&a);
    printf("%d\n",&b);
    printf("%d\n",&c);

    printf("%d\n",&a[2]-&a[3]);
    printf("%d\n",&b[2]-&b[3]);
    printf("%d\n",&c[2]-&c[3]);

    /*Är på detta sättet för att de olika delarna i "arryen" ligger 
    efter varand i minnet*/
    
}