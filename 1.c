// 31 st Oct 2021 9:33 A.M.
// PRIYANK DAVE

// HEADER FILES INCLUSION FOR I/O
#include<stdio.h>
// MAIN FUNCTION
int main()
{
    // initialising number, its count variable and the factorial of that number
    int number,count,fact=1;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&number);
    // defining condition for negative numbers
    if (number<0)
    {
        printf("Please enter positive number\n");
        return 0;
    }
    // calculating factorial using loop
    else
    {
        for ( count = number; count > 0; count--)
        {
            fact*=count;
        }
    }
    printf("Factorial of %d is : %d\n",number,fact);
    return 0;
}