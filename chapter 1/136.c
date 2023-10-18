#include <stdio.h>
#include <math.h>

int main(){
    for(int x = -15 ; x<16; x++){
        printf("%i => %i\n",x,4*pow(x,3) + 3* pow(sin(x),2) - 5*x -7);
    }
    printf("\n");
    for(float x = -1.0 ; x<1.1; x+=0.1){
        printf("%.1f => %f\n",x,4*pow(x,3) + 3* pow(sin(x),2) - 5*x -7);
    }
}