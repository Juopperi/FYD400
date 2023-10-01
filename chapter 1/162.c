#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *parent;
    struct node *left;
    struct node *right;
};
typedef struct node node;

void add(int num, node *currentNode){
    node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    
    newNode->data = num;
    newNode->parent = currentNode;
    newNode->left = NULL;
    newNode->right = NULL;

    if(currentNode->left = NULL){
        currentNode->left = newNode; 
    } else if (currentNode->right = NULL){
        currentNode->right = newNode;
    }
}

void print(struct node *currentNode){
    while(currentNode->parent != NULL){
        currentNode = currentNode->parent;
    }

    while(currentNode->left != NULL){
        printf("%d",currentNode->data);
        currentNode = currentNode->left;
    }

    printf("%d ",currentNode->data);
}

int main(){
    node *head = malloc(sizeof(struct node));
    head->parent = NULL;
    head->left = NULL;
    head->right = NULL;
    head->data = 1;
    node *currentNode = head; 
    
    add(2,currentNode);
    add(3,currentNode);
    add(4,currentNode);
    add(5,currentNode);
    add(6,currentNode);
    print(currentNode);

    free(head);
}