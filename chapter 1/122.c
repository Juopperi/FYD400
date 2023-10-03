#include <stdio.h>

int main(){
    int P,Q;
    printf("Skriv in 2 heltal\n");
    scanf("%d %d",&P,&Q);

    printf("\n%x\n",P);    
    printf("%.3lf\n",(float)P/Q);
    printf("%d\n",P%Q);
    printf("%e\n",(float)Q*P);
    printf("%09d\n",Q);
}