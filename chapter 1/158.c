#include <stdio.h>

void sortLength(char *list){
    char *temp;
    for(int i=0; i<sizeof(*list);i++){
        for(int j=i; j<sizeof(*list);i++){
            if(sizeof(*(list+i)) < sizeof(*(list+j))){
                *temp = *(list+i);
                *(list+i) = *(list+j);
                *(list+j) = *temp;
            } else if (sizeof(*(list+i)) == sizeof(*(list+j))){
                /* code */
            } else {
                *temp = *(list+j);
                *(list+j) = *(list+i);
                *(list+i) = *temp;
            }            
        } 
    }
}


int main(){
    char *ord[9];
    char inputOrd;
    int index = 0;

    for(int i = 0; i<10; i++){
        while(1){
            scanf("%c",&inputOrd);
            if(inputOrd == '\n'){
                break;
            }
            ord[index]=inputOrd;
            index++;
        }
    }

    sortLength(*ord[9]);

    for(int i = 0; i<10; i++){
        printf("%c\n",ord[i]);
    }

}