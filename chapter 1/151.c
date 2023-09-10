#include <stdio.h>

void dubblera(int *x);
//a) 
// 1) Adressen + 1
// 2) 10 + 1
// 3) *& tar ut varandra Så blir 10 + 1 
// 4) Skriver ut adress
// 5) * Gör så man får värdet istället för adressen
// 6) Skriver ut adress

//b) den ger adressen så programmet vet vart den ska spara det som skrivs in

int main(){
    int a = 5;
    printf("%i\n",a); 
    dubblera(&a);
    printf("%i\n",a);
}

void dubblera(int *x){
    *x = *x * 2;
}