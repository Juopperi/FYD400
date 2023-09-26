#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int input = 0,index =0;
    char inputOrd;
  
    printf("Hur m\x84nga ord vill du mata in? ");
    scanf("%d",&input);

    char *ord = malloc(sizeof(char)*100);

    printf("Ge %d ord nu:\n",input);
    rewind(stdin);

    while(1){
        scanf("%c",&inputOrd);
        if(inputOrd == '\n'){
            break;
        }
        ord[index]=inputOrd;
        index++;
    }

    ord[index] = '\0';
    printf("H\x84r \x84r dina ord:\n");

    for(int i = 0; i<strlen(ord); i++){
        if(ord[i] != 32){
            printf("%c",*(ord+i));
        } else {
            printf("\n");
        }
    }

}