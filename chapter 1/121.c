#include <stdio.h>


int main(){
    int input = 0;
    int answer = 0;

    printf("Skriv in ett heltal:\n");
    scanf("%d",&input);
    input = input *2;

    while(input > 0){
        input = input/10;
        answer++;
    }

    printf("%i",answer);
}