#include <stdio.h>
#include <string.h>

int main(){
    char text[] = "Gothenburg";
    char *my_pointer = text;
    int input = 0;
    
    while (input < 3){
        printf("Str\x84ngen \x84r: %s \n Pekaren pekar p\x86 %c, v\x84lj en operation: \n 1) Plus 1 \n 2) Minus 1 \n 3) Avsluta programmet\n",text,*my_pointer);
        scanf("%d", &input); 

        if((*my_pointer=='G' && input==2)||(*my_pointer=='g' && input==1)){
            printf("Detta g\x86r inte\n");
        }else{     
            switch(input){
                case 1:
                    my_pointer++;
                    break;
                case 2: 
                    my_pointer--;
                    break;
            }
        }
    }
}