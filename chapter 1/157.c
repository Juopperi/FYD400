#include <stdio.h>
#include <stdlib.h>

int main(){
    int input = 0;
    char *ord;

    printf("Hur m\x84nga ord vill du mata in) ");
    scanf("%d",&input);

    *ord = (char*)malloc(sizeof(input));

    printf("Ge %d ord nu:\n");
    scanf("%s",&ord);

    for(int i = 0; i<sizeof(*ord); i++){
        if(ord[i] != 32){
            printf("%c",*(ord+i));
        } else {
            printf("\n");
        }
    }

}