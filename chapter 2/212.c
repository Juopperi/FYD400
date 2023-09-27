#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;

    char inputWord[10];
    char textFile[100][15];
    char ch;
    const char filename[8] = "212.txt";
    int indexLetter = 0, indexWord = 0, found = 0;

    printf("Enter word: ");
    scanf("%s",inputWord);

    fp = fopen(filename,"r");

    do {
        ch = fgetc(fp);             
        if(ch == ' ' || ch == '\n'){
            textFile[indexWord][indexLetter] = '\0';
            indexWord++;
            indexLetter = 0;
        } else {
            textFile[indexWord][indexLetter] = ch;       
            indexLetter++;
        }
    } while (ch != EOF);
    
    textFile[indexWord][indexLetter] = '\0';
    fclose(fp);

    for(int i = 0; i < (indexWord+1); i++){
        if(strcmp(inputWord,textFile[i]) == 0){
            printf("Hittades pa ord %d\n",i);
            found++;
        }
    }

    printf("Was found a total of %d times\n",found);

}