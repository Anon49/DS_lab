// 2nd NOV 2021 12:30 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
void swap(int a, int b);
int main()
{
    // Initialising variable a and b to store 2 numbers
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    // Initialising temporary variable and swapping a and b by value
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf("Value of a and b after swapping are %d and %d respectively",a,b);
}