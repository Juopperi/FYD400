#include <stdio.h>
#include "convert.h"

int main(){
    int input, answer;

    printf("Skriv in meter:\n");
    scanf("%i",&input);

    answer = convert(input);
    printf("%i",answer);
}