#include <stdio.h>
#include <string.h>

char check(char a);

int main(){
    FILE *fp,*fpw;

    char intArray[31][21];
    int x = 0,y = 0;
    char ch = ' ';
    const char filename[8] = "216.txt";

    fp = fopen(filename,"r");
    
    while (ch != EOF){
        ch = fgetc(fp);         
        if(ch == ' '){
            x++;
        } else if (ch == '\n'){
            intArray[x+1][y] = '\n';
            x = 0;
            y++;
        } else {
            intArray[x][y] = check(ch);
        }
    } 
    
    fclose(fp);
    
    fpw = fopen("216Output.txt","w");

    for(int y = 0; y<20 ; y++){
        for(int x = 0; x<31 ; x++){
            printf("%c",intArray[x][y]);
            fprintf(fpw,"%c",intArray[x][y]);
        }
        //printf("\n");
        //fprintf(fpw,"\n");   
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
        default:
            return ' ';
    }
}