#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input;
    char* inputString = malloc(sizeof(char)*20);
    char *str1 = malloc(sizeof(char)*10);
    char *str2 = malloc(sizeof(char)*10);
    int i1 = 0, i2= 0 ,index = 0;

    printf("Skriv in en valfri text:\n");

    while(1){
        scanf("%c",&input);
        if(input == '\n'){
            break;
        }
        inputString[index]=input;
        index++;
    }

    for(int i = 0; i<index;i++){
        if(i % 2 == 0){
            str1[i1] = inputString[i];
            i1++;
        } else {
            str2[i2] = inputString[i];
            i2++;   
        }
    }

    str1[i1] = '\0'; // Null-terminate str1
    str2[i2] = '\0'; // Null-terminate str2

    printf("%s\n",str1);
    printf("%s\n",str2);

    free(inputString);
    free(str1);
    free(str2);



}