#include <stdio.h>

int main(){
    int a[] = {1,2,6,9};
    int b[] = {3,4,5,7};

    int ai = 0;
    int bi = 0;

    int n = sizeof(a)/sizeof(a[0]);
    int answer[2*n];
    int answerSorted[2*n];

    for(int i = 0; i < n; i++){
        answer[i] = a[i];
        answer[i+1] = b[i];
    }

    for(int i = 0; i < 2*n; i++){
        if(a[ai]>b[bi]){
            answerSorted[i] = b[bi];
            bi++;
        } else{
            answerSorted[i] = a[ai];
            ai++;
        }
    }

    for(int i=0; i<2*n; i++) {
        printf("%d ", answer[i]);
        printf("%d ", answerSorted[i]);
        printf("\n");
    }
}