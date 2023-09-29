#include <stdio.h>

int main(){
    char input;
    char* inputString[10][10] = malloc(sizeof(char)*20);
    int index = 0, indexOrd = 0;
    printf("Skriv in max tio ord, speparare med ,\n");

    while(1){
        scanf("%c",&input);
        if(input == '\n'){
            break;
        } else if(input == ','){
            inputString[indexOrd][index] = '\0';
            indexOrd++;
            index = 0;
        }
        inputString[indexOrd][index]=input;
        index++;
    }


}