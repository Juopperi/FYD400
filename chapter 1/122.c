#include <stdio.h>

int main(){
    int P,Q;
    printf("Skriv in 2 heltal\n");
    scanf("%d %d",&P,&Q);

    printf("%x\n",P);    
    printf("%.3lf\n",(float)P/Q);
    printf("%d\n",P%Q);
    printf("%e\n",Q*P);
    printf("%09d\n",Q);
}