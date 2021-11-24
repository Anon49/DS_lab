// 7th NOV 2021 10:17 AM
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
// Defining constant N for size of the array
#define N 100
struct Stack
{
    char arr_stack[N];
    int Top;
}S;
// Prototype for recognize function and basic manipulation function
void Recognize(char str[]);
void Push(char x);
char Pop();
int main()
{
    // Initialsing Top pointer
    S.Top=-1;
    char str[N];
    printf("Enter string of 2 same type of characters to recognize if number of times one apprear is same as other : ");
    scanf("%[^\n]s",str);
    Recognize(str);
}
void Push(char x)
{
    if (S.Top>=50)
        printf("Stack Overflow");
    else
    {
        S.Top++;
        S.arr_stack[S.Top]=x;
    }
}
char Pop()
{
    if (S.Top<0)
    {
        printf("Stack Underflow");
        return 'N';
    }
    else
    S.Top--;
    return(S.arr_stack[S.Top]);
}
void Recognize(char str[])
{
    char a;
    int count_b=0;
    for (int  i = 0; i < strlen(str); i++)
    {
        // Storing first character in a 
        if (i==0)
        {
            a=str[i];
            Push(str[i]);
        }
        else if(str[i]==a)
        {
            Push(str[i]);
        }
        // Any character except the one stored in a considered to be b
        else
        count_b++;
    }
    while(S.Top>=0)
    {
        Pop();
        count_b--;
    }
    // If all the characters except the one stored in a will be counted and check
    if(count_b!=0||S.Top!=-1)
        printf("Invalid String");
    else
    printf("Valid String");
    getch();
}