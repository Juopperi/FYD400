#include <stdio.h>

int main(){
    int* a[4];
    char* b[4];
    double* c[4];
    
    for(int x = 0; x<4 ; x++){
        printf("%p\n",&(a[x]));
        printf("%p\n",&(b[x]));
        printf("%p\n",&(c[x]));
        printf("\n");
    }
    
    printf("%ld\n",(long)&a[3]-(long)&a[2]);
    printf("%ld\n",(long)&b[3]-(long)&b[2]);
    printf("%ld\n",(long)&c[3]-(long)&c[2]);

    /*Är på detta sättet för att de olika delarna i "arryen" ligger 
    efter varand i minnet*/
    
}