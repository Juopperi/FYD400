#include <stdio.h>
#include <stdlib.h>

struct node {
    double data;
    struct node *next;
    struct node *previous;
};

void add(double num, struct node *currentNode){
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    while(currentNode->next != NULL){
        currentNode = currentNode->next;
         
    }

    newNode->data = num;
    newNode->previous = currentNode;
    newNode->next = NULL;

    currentNode->next = newNode;     
}

void print(struct node *currentNode){
    while(currentNode->next != NULL){
        printf("%.2f ",currentNode->data);
        currentNode = currentNode->next;
    }
    printf("%.2f ",currentNode->data);
}

void delete(int num, struct node *currentNode){
    int index = 0;
    struct node *previous;
    while(index < num){
        previous = currentNode;
        currentNode = currentNode->next;
        index++;
    }

    previous->next = currentNode->next;
    (currentNode->next)->previous = previous;

    free(currentNode);
}

int main(){
    struct node *first = malloc(sizeof(struct node));
    first->next = NULL;
    first->previous = NULL;
    first->data = 0.0;
    struct node *currentNode = first; 
    
    int input = 0;
    int index = 0;
    double num = 0.0;

    while (input<5){
        printf("V\x84lj en operation: \n 1) Skapa en ny nod \n 2) Add one node \n 3) Delete one node on desired place\n 4) Print all values\n 5) Exit program\n");
        scanf("%d", &input); 
     
        switch(input){
            case 1:
                while (currentNode->next != NULL) {
                    struct node *temp = currentNode;
                    currentNode = currentNode->next;
                    free(temp);
                }
                first->next = NULL;
                currentNode = first;
                break;
            case 2: 
                printf("Enter a value ");
                scanf("%lf", &num);
                add(num,currentNode);
                break;
            case 3:
                printf("Enter which (The first one i zero): ");
                scanf("%d", &index);
                delete(index,currentNode);            
                break;
            case 4:
                print(currentNode);
                break;
        }
    } 
    while (currentNode->next != NULL) { //Fixar minne innan programet stänger ner
        struct node *temp = currentNode;
        currentNode = currentNode->next;
        free(temp);
    }
    free(first);
}