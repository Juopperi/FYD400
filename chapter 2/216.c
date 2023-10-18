#include <stdio.h>
#include <string.h>

#define MAXLEN 2000

char check(char a);

int main(){
    FILE *fp,*fpw;

    char intArray[20][31];
    char line[MAXLEN];
    int x = 0,y = 0;
    char ch;
    const char filename[8] = "216.txt";

    fp = fopen(filename,"r");

    do {
        ch = fgetc(fp);         
        if(ch == ' '){
            x++;
        } else if (ch == '\n'){
            x = 0;
            intArray[31][y] = '\0';
            y++;
        } else {
            intArray[x][y] = check(ch);
        }
    } while (ch != EOF);
    
    fclose(fp);
    fpw = fopen("216Output.txt","w");

    for(int y = 0; y<21 ; y++){
        for(int x = 0; x<32 ; x++){
            printf("%c",intArray[x][y]);
            fprintf(fpw,"%c",intArray[y][x]);
        }
        printf("\n");
        fprintf(fpw,"\n");   
    }
    fclose(fpw);
}

char check(char a){
    switch(a){
        case '0':
            return ' ';
        case '1':
            return '.';
        case '2':
            return ':';
        case '3':
            return '-';
        case '4':
            return '+';
        case '5':
            return '/';
        case '6':
            return '!';
        case '7':
            return '&';
        case '8':
            return '#';
        case '9':
            return '@';
        case '\n':
            return '\n';
    }
    return 'A';
}