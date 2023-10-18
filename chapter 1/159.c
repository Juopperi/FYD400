#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrom(char* a);

int main(){
    char input;
    char inputString[10][20];
    int index = 0, indexOrd = 0;
    printf("Skriv in max tio ord, speparare med ,\n");

    while(1){
        scanf("%c",&input);
        if(input == '\n'){
            inputString[indexOrd][index] = '\0';
            break;
        } else if(input == ','){
            inputString[indexOrd][index] = '\0';
            indexOrd++;
            index = 0;
        } else {
            inputString[indexOrd][index]=input;
            index++;
        } 
    }
    
    for(int i = 0; i<indexOrd+1;i++){
        printf("%s",inputString[i]);
        if(isPalindrom(inputString[i])==1){
            printf("    PALINDROM!\n");
        } else {
            printf("    inte palindrom\n");
        }
    }    
}

int isPalindrom(char* a){
    int count = 0;
    for (int i = 0; a[i]; i++)
        if (a[i] != ' ')
            a[count++] = a[i]; 
    a[count] = '\0';

    for(int x = 0; x<strlen(a); x++){
        if(a[x] != a[strlen(a)-1-x]){
            return -1;
        }
    }
    return 1;
}