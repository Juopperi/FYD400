#include <stdio.h>

int main(){
    int a[] = {1,2,6,9}; //Initiering
    int b[] = {3,4,5,7};

    int ai = 0;
    int bi = 0;
    
    int n = sizeof(a)/sizeof(a[0]); //Bestämmer hur långa dom är
    int answer[2*n];
    int answerSorted[2*n];

    for(int i = 0; i < 2*n; i=i+2){ //Tar varannan
        answer[i] = a[ai];
        answer[i+1] = b[ai];
        ai++;
    }

    ai=0;

    for(int i = 0; i < (2*n); i++){ //Tittar storlken mellan dom och väljer den minsta
        if(a[ai]>b[bi]){
            answerSorted[i] = b[bi];
            bi++;
        } else{
            answerSorted[i] = a[ai];
            ai++;
        }
    }

    if(bi>ai){ //Fixar den sista siffran
        answerSorted[n*2-1] = a[n-1];
    } else {
        answerSorted[n*2-1] = b[n-1];
    }

    for(int i=0; i<2*n; i++) { //Skriver ut
        printf("%d \t", answer[i]);
        printf("%d", answerSorted[i]);
        printf("\n");
    }
}