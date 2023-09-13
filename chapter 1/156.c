#include <stdio.h>

int main(){
    char *input;
    int i1,i2 = 0;
    printf("Skriv in en valfri text:\n");
    scanf("%c",input);
    char *str1,*str2 = malloc(sizeof(input));
    for(int i = 0; i<sizeof(input);i++){
        if(i%2 == 0){
            str1[i1] = input[i];
            i1++;
        } else {
            str1[i2] = input[i];
            i2++;     
        }
    }





}