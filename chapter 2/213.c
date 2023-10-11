 
 #include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;

    int textArray[100][15];
    char ch;
    const char filename[8] = "213.txt";

    fp = fopen(filename,"r");

    do {
        ch = fgetc(fp);             
        if(ch == ' ' || ch == '\n'){
            //TODO
        } else {
            //TODO
        }
    } while (ch != EOF);
    
    fclose(fp);
}