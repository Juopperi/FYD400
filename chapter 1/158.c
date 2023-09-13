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
    char *input[9];

    for(int i = 0; i<10; i++){
        scanf("%c",&input[i]);
    }

    sortLength(*input[9]);

    for(int i = 0; i<10; i++){
        printf("%c\n",input[i]);
    }

}