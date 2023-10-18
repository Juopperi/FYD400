#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void isort(void *base, size_t nmemb, size_t size, int (*compare)(const void*,const void*));
int compare(const void* p1, const void* p2);


void main(){
    int array[] = {5,6,2,1,3,5,6,4,9,8,76,1,2,3,54,5,436,346,34,345};
    isort(&array[0],sizeof(array)/sizeof(array[0]),sizeof(int), compare);
    for(int i = 0; i < sizeof(array)/sizeof(int) ; i++){
        printf("%i\n",array[i]);
    }
}

void isort(void *base, size_t nmemb, size_t size, int (*compare)(const void*,const void*)){
    //base pointer ot first element, nmemb amount of elemts
    int i = 1;
    int x = 0;
    void *temp = malloc(size);
    while(i < nmemb){
        x = i;
        while(x > 0 && compare((base+size*x),(base+size*(x-1)))<0){
            memcpy(temp,(base+size*x),size);
            memcpy((base+size*x),(base+size*(x-1)),size);
            memcpy((base+size*(x-1)),temp,size);
            x = x-1;
        } 
        i++;
    }
    free(temp);
}

int compare(const void*p1, const void* p2){
    const int *pp1 = (const int *)p1;
    const int *pp2 = (const int *)p2;
    return (*pp1 - *pp2);
}