// 17th NOV 2021 7:15 PM
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include <stdio.h>
#include <conio.h>
#define N 5
struct Queue
{
    int F, R;
    int queue[N];
} Q;
// Queue manipulation Functions
void Insert(int x)
{
    if (Q.R == N - 1)
    {
        Q.R = 0;
    }
    else
    {
        Q.R++;
    }
    if (Q.R == Q.F)
    {
        if (Q.R == 0)
        {
            Q.R = N - 1;
            printf("Queue Overflow\nDelete some elements to store more numbers\n");
        }
        else
        {
            Q.R--;
            printf("Queue Overflow\nDelete some elements to store more numbers\n");
        }
    }
    if (Q.F == -1)
    {
        Q.F++;
    }
    Q.queue[Q.R] = x;
}
int Delete()
{
    if (Q.F == -1 && Q.R == -1)
    {
        printf("Queue Underflow\n");
    }
    if (Q.F == Q.R)
    {
        int temp;
        temp = Q.queue[Q.F];
        Q.F = -1;
        Q.R = -1;
        return temp;
    }
    if (Q.F == N - 1)
    {
        Q.F = 0;
        return Q.queue[N - 1];
    }
    else
    {
        int temp = Q.queue[Q.F];
        Q.F++;
        return temp;
    }
}
void Display()
{
    // For Empty
    if (Q.F < 0)
    {
        printf("Queue is empty");
    }
    // For simple queue
    if (Q.R >= Q.F)
    {
        for (int i = Q.F; i <= Q.R; i++)
        {
            printf("%d ", Q.queue[i]);
        }
        printf("\n");
    }
    // For circulated one
    else if (Q.F > Q.R)
    {
        for (int i = Q.F; i <= N - 1; i++)
        {
            printf("%d ", Q.queue[i]);
        }
        for (int i = 0; i <= Q.R; i++)
        {
            printf("%d ", Q.queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    // Initialising Front and Rear to -1
    Q.F = -1;
    Q.R = -1;
    int ch, x;
    while (1)
    {
        printf("Which of the following function you want to use?\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a number to insert into the stack : ");
            scanf("%d", &x);
            Insert(x);
            break;
        case 2:
            printf("%d ", Delete());
            break;
        case 3:
            printf("The elements in the stack are : ");
            Display();
            break;
        case 4:
            getch();
            return 0;
            break;
        }
    }
}
