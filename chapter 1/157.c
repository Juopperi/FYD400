#include <stdio.h>
#include <stdlib.h>

int main(){
    int input = 0,index =0;
    char inputOrd;
  
    printf("Hur m\x84nga ord vill du mata in) ");
    scanf("%d",&input);

    char *ord = malloc(sizeof(char)*20);

    printf("Ge %d ord nu:\n",input);
    
    while(1){
        scanf("%c",&inputOrd);
        if(inputOrd == 'o'){
            break;
        }
        ord[index]=inputOrd;
        index++;
    }

    for(int i = 0; i<sizeof(*ord); i++){
        if(ord[i] != 32){
            printf("%c",*(ord+i));
        } else {
            printf("\n");
        }
    }

}