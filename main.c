#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct node
{
    char keyValue[7];
    struct node *left;
    struct node *right;
    char data[255];
} node;

node *createNode(char *keyValue, char *data) {
    node* result = malloc(sizeof(node));
    if (result != NULL) {
        result->left = NULL;
        result->right = NULL;
        strcpy(result->keyValue, keyValue);
        strcpy(result->data, result->data);
    }
    return result;
}

void printTree(node *root){
    if (root == NULL){
        printf("The Tree is empty\n");
        return;
    }
    printf("value of node %s = %s\n", *root->keyValue, *root->data);

    printf("left\n");
    printTree(root->left);
    printf("right\n");
    printTree(root->right);
    printf("done\n");
    return;
}

bool insertNumber(node **rootPointer, char[7]keyValue) {
    node *root = *rootPointer;
    if (root == NULL) {
        (*rootPointer) = createNode(keyValue, data);
        return true;
    }
    if (keyValue == root->keyValue) {
        strcpy(root->data, data);
    }
}

int main() {

    int age = 30;
    int *pAge = &age;

    printf("%d", *pAge);

    struct node *n1 = createNode("1", "data 1");
    struct node *n2 = createNode("2", "data 2");
    struct node *n3 = createNode("3", "data 3");
    struct node *n4 = createNode("4", "data 4");
    struct node *n5 = createNode("5", "data 5");

    n1->left =n2;
    n1->right = n3;
    n3->left = n4;
    n4->right = n5;

    printTree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);


    return 0;
}


void put(char keyValue[7], char data[255]) {

}