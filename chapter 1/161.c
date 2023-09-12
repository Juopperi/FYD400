#include <stdio.h>
#include <stdlib.h>

struct node {
    double data;
    struct node *next;
    struct node *previous;
};

int add(int num, struct node *name){
    struct node *newNode = malloc(sizeof(struct node));
    (*newNode).data = num;
    (*newNode).previous = &name;

}

int main(){
    
    struct node *first = NULL;
   
    struct node *second = malloc(sizeof(struct node));
    (*second).data = 5;
    (*second).previous = first;

    struct node *third = malloc(sizeof(struct node));
    (*third).data = 99;
    (*third).previous = second;

    struct node *currentNode = third;


    while(currentNode != NULL){
        printf("%.2f ",(*currentNode).data);
        currentNode = (*currentNode).previous;
    }
    

}