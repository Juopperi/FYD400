#include <stdio.h>


int main(){
    int input = 0;
    int answer = 0;

    printf("Skriv in ett heltal:\n");
    scanf("%d",&input);

    input = input *2;

    while(input > 0){ //Räknar siffor
        input = input/10;
        answer++;
    }
    
    if(answer != 0){ //Tittar så det är en siffra som skrivits in
        printf("%i",answer);
    } else {
        printf("Enter a number please :)\n");
    }
}