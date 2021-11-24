// 22th NOV 2021 3:30 PM
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
typedef struct Node* node;
node createNode(int x)
{
    node temp = (node)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link=NULL;
    return temp;
}
void insertFirst(int x, node head)
{
    if(head==NULL)
    {
        head->data=x;
        head->link=NULL;
        return;
    }
    else
    {
        node temp= createNode(x);
        temp->link=head;
        head=temp;
    }
}
void insertLast(int x, node head)
{
    if(head==NULL)
    {
        head->data=x;
        head->link=NULL;
    }
    else
    {
        node temp= createNode(x);
        node current= head;
        while (current->link!=NULL)
        {
            current=current->link;
        }
        current->link=temp;
    }
}
void deleteFirst(node head)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    node temp = head;
    head=head->link;
    free(temp);
}
void deleteLast(node head)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        node current = head;
        node next=current->link;
        while (next->link!=NULL)
        {
            current= next;
            next=current->link;
        }
        free(next);
    }
}