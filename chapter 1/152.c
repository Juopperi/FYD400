#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char text[] = "Gothenburg";
    char *my_pointer = text;
    char inputS[10];
    int input = 0;
    
    while (input < 3){
        printf("Str\x84ngen \x84r: %s \n Pekaren pekar p\x86 %c, v\x84lj en operation: \n 1) Plus 1 \n 2) Minus 1 \n 3) Avsluta programmet\n",text,*my_pointer);

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

        if((*my_pointer=='G' && input==2)||(*my_pointer=='g' && input==1)){
            printf("Detta g\x86r inte\n");
            input = 0;
        }else{     
            switch(input){
                case 1:
                    my_pointer++;
                    input = 0;
                    break;
                case 2: 
                    my_pointer--;
                    input = 0;
                    break;
            }
        }
    }
}