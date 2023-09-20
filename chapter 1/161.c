#include <stdio.h>
#include <stdlib.h>

struct node {
    double data;
    struct node *next;
    struct node *previous;
};

void add(int num, struct node *currentNode){
    struct node *newNode = malloc(sizeof(struct node));
    printf("%i",sizeof(struct node));
    while((*currentNode).next != NULL){
        currentNode = (*currentNode).next;
         
    }

    (*newNode).data = num;
    (*newNode).previous = currentNode;
    (*newNode).next = NULL;

    (*currentNode).next = newNode;     
}

void print(struct node *currentNode){
    while((*currentNode).next != NULL){
        printf("%.2f ",(*currentNode).data);
        currentNode = (*currentNode).next;
    }
}

void delete(int num, struct node *currentNode){
    int index = 0;
    struct node *previous;
    while(index < num){
        previous = currentNode;
        currentNode = (*currentNode).next;
        index++;
    }

    (*previous).next = (*currentNode).next;
    ((*currentNode).next)->previous = previous;

    free(currentNode);
}

int main(){
    struct node *first = malloc(sizeof(struct node));
    first->next = NULL;
    first->previous = NULL;
    struct node *currentNode = first; 
    add(5,currentNode);
    print(currentNode); 
    struct node *x;
    int input = 0, num = 0;
    while (1){
        printf("V\x84lj en operation: \n 1) Skapa en ny nod \n 2) Add one node \n 3) Delete one node on desired place\n 4) Print all values\n 5) Exit program\n");
        scanf("%d", &input); 
     
        switch(input){
            case 1:
                while((*currentNode).next != NULL){
                    x = currentNode;
                    currentNode = (*currentNode).next;
                    free(x);   
                }
                struct node *first = malloc(sizeof(struct node));
                first->next = NULL;
                first->previous = NULL;
                struct node *currentNode = first;
                break;
            case 2: 
                printf("Enter a value ");
                scanf("%d", &num);
                add(num,currentNode);
                break;
            case 3:
                printf("Enter which ");
                scanf("%d", &num);
                delete(num,currentNode);            
                break;
            case 4:
                print(currentNode);
                break;
        }
        rewind(stdout);  
    } 
}