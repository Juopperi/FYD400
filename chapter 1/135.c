#include <stdio.h>
#include <math.h>

int main(){
    float cost = 0, payed =0, diff = 0;
    int exchcange[9] = {0,0,0,0,0,0,0,0,0};
    float exchcangeValues[9] = {1000,500,100,50,20,10,5,1,0.5};
    printf("Enter the cost and the money payed: ");
    scanf("%f %f",&cost,&payed);
    diff = round(2*(payed - cost))/2;
    printf("You will be given %.1f\n",diff);

    for(int i = 0; i<9 ; i++){
        while(diff >= exchcangeValues[i]){
        diff = diff - exchcangeValues[i];
        exchcange[i]++;
        }
    }

    for(int i = 0; i<9 ; i++){
        if(exchcange[i] != 0){
            printf("%.1f %d\n",exchcangeValues[i],exchcange[i]);
        }
    }

}