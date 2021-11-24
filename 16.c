// 11th NOV 2021 10:00 PM
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#define N 100
// Defining Stack Structure
struct Stack
{
    int Top;
    int value;
    int stack[N];
};
struct Stack S;
// Defining stack manipulation function
void Push(int x)
{
    if (S.Top > N - 1)
        printf("Stack Overflow");
    else
    {
        S.Top++;
        S.stack[S.Top] = x;
    }
}
int Pop()
{
    if (S.Top < 0)
    {
        printf("Stack Underflow ");
        return 'N';
    }
    else
        S.Top--;
    return (S.stack[S.Top + 1]);
}
// Operation needed to perform to reach the final value of postfix expression
int performOperation(int op1, int op2, char x)
{
    if (x == '+')
        return (op1 + op2);
    if (x == '-')
        return (op1 - op2);
    if (x == '*')
        return (op1 * op2);
    if (x == '/')
        return (op1 / op2);
    if (x == '^')
        return ((int)pow(op1, op2));
}
bool isDigit(char x)
{
    if (x >= '1' && x <= '9')
        return true;
    else
        return false;
}
int main()
{
    S.Top = -1;
    S.value = 0;
    char *temp, prefix[N];
    int operand1 = 0, operand2 = 0;
    printf("Enter prefix expression to solve : ");
    scanf("%s", prefix);
    temp = prefix + strlen(prefix) - 1;
    // looping till the last digit
    while (temp >= prefix)
    {
        if (isDigit(*temp))
        {
            Push((int)(*temp) - 48);
        }
        else
        {
            operand1 = Pop();
            operand2 = Pop();
            S.value = performOperation(operand1, operand2, *temp);
            // Pushing operated result to stack
            Push(S.value);
        }
        temp--;
    }
    // The last number left in stack at the end would be the final answer which is then printed by popping out of stack
    printf("%d", Pop());
    getch();
}