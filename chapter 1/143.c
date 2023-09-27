#include <stdio.h>

int main(){
    char units[8][8] = {"years","months","days","hours","minutes","Seconds"};
    int inputs1[6] = {0,0,0,0,0,0};
    int inputs2[6] = {0,0,0,0,0,0};
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i<6 ; i++){
        printf("Enter %s:",units[i]);
        scanf("%d",&inputs1[i]);
        printf("\n");
    }

    for(int i = 0; i<6 ; i++){
        printf("Enter %s:",units[i]);
        scanf("%d",&inputs2[i]);
        printf("\n");
    }
}