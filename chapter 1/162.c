#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *parent;
    struct node *left;
    struct node *right;
};
typedef struct node node;

void add(int num, node *currentNode, bool left){
    node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    
    newNode->data = num;
    newNode->parent = currentNode;
    newNode->left = NULL;
    newNode->right = NULL;
    if(left){
        currentNode->left = newNode;
    } else {
        currentNode->right = newNode;
    } 
}

node* check(node *currentNode){
    if(currentNode->left != NULL && currentNode->right != NULL){
        check(currentNode->left);
        printf("test\n");
    } else {
        return currentNode;
    }
}

void print(node *currentNode){
    while(currentNode->parent != NULL){
        currentNode = currentNode->parent;
    }

    printf("%d",currentNode->data);
    printf("\n");
    printf("%d ",(currentNode->left)->data);
    printf("%d ",(currentNode->right)->data);
}

int main(){
    node *head = malloc(sizeof(struct node));
    head->parent = NULL;
    head->left = NULL;
    head->right = NULL;
    head->data = 1;
    node *currentNode = head; 
    
    add(2,currentNode,true);
    add(3,currentNode,false);
    printf("%d\n",currentNode->data);
    currentNode = check(currentNode);
    printf("%d\n",currentNode->data);
    add(4,currentNode,true);
    add(5,currentNode,false);
    currentNode = check(currentNode);
    printf("%d\n",currentNode->data);
    add(6,currentNode,true);
    printf("%d\n",currentNode->data);
    print(currentNode);

    free(head);
}