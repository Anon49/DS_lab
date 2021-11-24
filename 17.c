// 16th NOV 2021 9:45 P.M
// BY DAVE PRIYANK

// INCLUSION OF standard I/O HEADER FILE and string HEADER file
#include<stdio.h>
#include<conio.h>
#define N 5
// Structure Declaration
struct Queue
{
    int F,R;
    int queue[N];
}Q;
// Queue manipulation Functions
void Insert(int x)
{
    if (Q.R==N-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (Q.F=-1)
    {
        Q.F++;
        Q.R++;
        Q.queue[Q.R]=x;
    }
    
}
void Delete()
{
    if (Q.R<0||Q.F<0||Q.F>Q.R)
    {
        printf("Queue Underflow\n");
        Q.R=-1;Q.F=-1;
    }
    else
    {
        printf("The deleted element is : %d\n",Q.queue[Q.F]);
        Q.F++;
    }
}
void Display()
{
    // For Empty
    if(Q.F<0)
    {
        printf("Queue is empty");
    }
    // For simple queue
        for (int i = Q.F; i<= Q.R; i++)
        {
            printf("%d ",Q.queue[i]);
        }
        printf("\n");
}
int main()
{
    // Initialising Front and Rear to -1 
    Q.F=-1;
    Q.R=-1;
    int ch,x;
    while(1)
    {
        printf("Which of the following function you want to use?\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("Enter a number to insert into the Queue : ");
                    scanf("%d",&x);
                    Insert(x);
                    break;
                case 2:
                    Delete();
                    break;
                case 3:
                    printf("The elements in the queue are : ");
                    Display();
                    break;
                case 4:
                    getch();
                    return 0;
                    break;
            }
    }
}
