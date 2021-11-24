// 2nd NOV 2021 11:35 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
int main()
{
    // Initialising 3 2x2 array and storing elements in 2 arrays
    int a[2][2],b[2][2],c[2][2];
    printf("Enter the elements of matrix a of order 2x2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix b of order 2x2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // Addition of both matrix storing in 3rd array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    // Printing out the third array
    printf("Addition of matrix a and b is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}