// 2nd NOV 2021 12:43 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
// Declaring prototype of swap() function
void swap(int*, int*);
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    // Passing addresses of a and b
    swap(&a,&b);
    printf("Values of a and b after swapping are %d and %d respectively\n",a,b);
}
void swap(int *a, int *b)
{
    // Swapping values by use of pointers
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}