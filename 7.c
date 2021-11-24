// 2nd NOV 2021 11:50 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
int main()
{
    // Initialising and storing values in 3x2 and 2x3 matrix respectively
    int a[3][2],b[2][3],c[3][3];
    printf("Enter the elements of array a of order 2x3\n");
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of array b of order 3x2\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // Storing values got by multiplication of both matrix in another matrix of order 3x3
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=(a[i][0]*b[0][j]+a[i][1]*b[1][j]);
        }
    }
    // Printing that 3x3 matrix
    printf("Multiplication of matrix a and b is\n");
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}