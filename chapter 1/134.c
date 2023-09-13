#include <stdio.h>
#include <ctype.h>

int main(){
    int input = 0;
    int number = 0;
    while (input != 4 ){
        printf("Taler \x84r %i, v\x84lj en operation: \n 1) Addera 1 \n 2) Multiplicera med 2 \n 3) Subtrahera 3 \n 4) Avsluta programmet\n",number);
        
        while(input == 0){
            scanf("%d", &input); 
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