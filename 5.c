// 2nd NOV 2021 11:24 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
int main()
{
    // Initialising variable and storing size of array
    int arr_size;
    printf("Enter the size of the array : ");
    scanf("%d",&arr_size);
    // Storing elements of the array
    int arr[arr_size];
    printf("Enter the elements of the array : ");
    for (int  i = 0; i < arr_size; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Printing out the whole array using pointers
    printf("The array is : ");
    for (int  i = 0; i < arr_size; i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}