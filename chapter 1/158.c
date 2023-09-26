#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortLength(char **list){
    char* temp;
    for(int i=0; i<10 ;i++){
        for(int j=(i+1); j<10 ;j++){            
            if (strlen(list[i]) < strlen(list[j]) || 
               (strlen(list[i]) == strlen(list[j]) && strcmp(list[i], list[j]) < 0)) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }        
        } 
    }
}


int main(){
    char **ord = malloc(10 * sizeof(char*));
    char inputOrd;
    int index = 0;

    for(int i = 0; i<10; i++){
        ord[i] = malloc(sizeof(char)*14);
        index = 0;
        while(1){
            scanf("%c",&inputOrd);
            if(inputOrd == '\n'){
                break;
            }
            ord[i][index]=inputOrd;
            index++;
        }
        ord[i][index] = '\0';
    }

    sortLength(ord);

    for(int i = 9; i>=0; i--){
        printf("%s\n",ord[i]);
    }
    
    free(ord);

}