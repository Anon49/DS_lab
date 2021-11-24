// 7th NOV 2021 10:17 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
#include<conio.h>
// Defining structure for Student details
struct Stack
{
    int TOP;
    int arr_stack[50];
};struct Stack S;
// Defining basic functions for operation on Stack
void Push(int x)
{
    if (S.TOP>=50)
        printf("Stack Overflow");
    else
    {
        S.TOP++;
        S.arr_stack[S.TOP]=x;
    }
}
int Pop()
{
    if (S.TOP<0)
    {
        printf("Stack Underflow");
        return -9999;
    }
    else
    S.TOP--;
    return(S.arr_stack[S.TOP]);
}
int Peep(int i)
{
    if((S.TOP)-i+1<0)
    {
        printf("Stack Underflow");
        return -9999;
    }
    else
    return(S.arr_stack[(S.TOP)-i+1]);
}
void Change(int i,int x)
{
    if ((S.TOP)-i+1<0)
    {
        printf("Stack Underflow");
        return ;
    }
    else
    S.arr_stack[(S.TOP)-i+1]=x;
}
void Display()
{
    if (S.TOP<0)
    {
        printf("Stack Underflow");
    }
    else
    {
        for(int i=0;i<=S.TOP;i++)
        printf("%d ",S.arr_stack[i]);
    }
}
int main()
{
    // Initialising value of Top so it doesnt work with garbage value
    S.TOP=-1;
    int ch,x,i;
    // Looping till user chose to exit
    while(1)
    {
        printf("Which of the following function you want to use?\n1.Push\n2.Pop\n3.Peep\n4.Change\n5.Display\n6.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("Enter a number to push into the stack : ");
                scanf("%d",&x);
                Push(x);
                break;
            case 2:
                printf("%d\n",Pop());
            break;
            case 3:
                printf("Enter the position from the top of the stack to know value at that position : ");
                scanf("%d",&i);
                printf("%d\n",Peep(i));
                break;
            case 4:
                printf("Enter the position from the top of the stack to change value at that position : ");
                scanf("%d",&i);
                printf("Enter the value to change at that position: ");
                scanf("%d",&x);
                Change(i,x);
                break;
            case 5:
                Display();
                printf("\n");
                break;
            case 6:
                return 0;
        }
    }
    getch();
}