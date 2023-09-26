#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char inputS[10];
    int input = 0;
    int number = 0;
    while (input < 4 && input > -1){
        printf("Taler \x84r %i, v\x84lj en operation: \n 1) Addera 1 \n 2) Multiplicera med 2 \n 3) Subtrahera 3 \n 4) Avsluta programmet\n",number);
        
        while(input == 0){
            scanf("%9s", &inputS);
            if(strlen(inputS) != 1){
                printf("Skriv en siffra!\n");
                exit(1);
            } else if(isdigit(inputS[0])){
                input = atoi(inputS);
            } else {
                printf("Skriv en siffra!\n");
                exit(1);
            }
        }

        switch(input){
            case 1:
                number++;
                input = 0;
                break;
            case 2: 
                number = number * 2;
                input = 0;
                break;
            case 3:
                number = number - 3;
                input = 0;
                break; 
        }
    }

}