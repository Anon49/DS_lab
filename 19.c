// 21th NOV 2021 4:15 PM
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include<stdio.h>
#include<stdlib.h>
// Declaration of Node structure
struct Node
{
    int data;
    struct Node* link;
};
int main()
{
    // Defining node pointer for a node using malloc
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value in node : ");
    scanf("%d",&node->data);
    printf("Data in the node is %d and the link is NULL\n",node->data);
    free(node);
    printf("Node is deleted");
}