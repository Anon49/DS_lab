// 10th NOV 2021 10:13 AM
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>
#define N 100
// Defining structure for stack
struct Stack{
int Top;
char stack[N];
}S;
// Defining stack manipulation function
void Push(char x)
{
    if (S.Top == N)
        printf("Stack Overflow");
    else
    {
        S.Top++;
        S.stack[S.Top] = x;
    }
}
char Pop()
{
    if (S.Top < 0)
    {
        printf("Stack Underflow");
        return 'N';
    }
    else
        S.Top--;
    return (S.stack[S.Top + 1]);
}
// Defining precedence functions for every characters in infix expression
int F(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
    {
        return 3;
    }
    if (x == '^')
        return 6;
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        return 7;
    }
    if (x == '(')
        return 9;
    if (x == ')')
        return 0;
}
int G(char x)
{
    if (x == '+' || x == '-')
        return 2;
    if (x == '*' || x == '/')
    {
        return 4;
    }
    if (x == '^')
        return 5;
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        return 8;
    }
    if (x == '(')
        return 0;
    if (x == ')')
        return -9;
}
int R(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
        return -1;
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        return 1;
    }
}
int main()
{
    int rank = 0;
    S.Top = -1;
    Push('(');
    char polish[100], infix[100], ch;
    int i, j = 0;
    printf("Enter infix expression to convert it into postfix expression : ");
    scanf("%s", infix);
    // Adding closing bracket at the end to make this algo work
    for (i = 0; infix[i] != '\0'; i++)
    {}
    infix[i] = ')';
    i++;
    infix[i] = '\0';
    char *next, temp;
    next = infix;
    while (*next != '\0')
    {
        if (S.Top < 0)
        {
            printf("Invalid1");
            exit(1);
        }
        else
        {
            // If its not a variable then stack would be emptied till the first '(' and added to polish
            while (G(S.stack[S.Top]) > F(*next))
            {
                temp = Pop();
                polish[j] = temp;
                j++;
                rank = rank + R(temp);
                if (rank < 1)
                {
                    printf("Invalid2");
                    exit(1);
                }
            }
            // If its a variable then push it
            if (G(S.stack[S.Top]) != F(*next))
            {
                Push(*next);
            }
            // If its braces then simply pop it out and don't store it anywhere 
            else
            {
                Pop();
            }
            next++;
        }
    }
    // Adding null character at the end to print it using %s format specifier
    polish[j] = '\0';
    printf("%s", polish);
    getch();
}