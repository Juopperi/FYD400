#include <stdio.h>

void dubblera(int x){
    x = x*2;
}

int dubbleraReal(int x){
    x = x*2;
    return x;
}

int main(){
    int x = 5;
    printf("%d\n",x);
    dubblera(x);
    printf("%d\n",x);
    x = dubbleraReal(x);
    printf("%d\n",x);
}