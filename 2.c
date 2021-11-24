// 31st OCT 2021 9:50 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
// DEFINING PROTOTYPE FOR RECURSIVE FACTORIAL FUNCTION
int factorial(int number);
void main()
{
    // INITIALISING number VARIABLE AND fact VARIABLE FOR NUMBER AND ITS FACTORIAL
    int number,fact;
    printf("Enter a number to find its factorial : ");
    scanf("%d",&number);
    fact=factorial(number);
    printf("Factorial of %d is : %d",number,fact);
}
int factorial(int number)
{
    // DEFINING BASE CONDITION FOR RECURSION TO STOP
    if(number==0)
    return 1;
    // CALLING AND RETURNING CALCULATED RESULT
    else
    return (number*factorial(number-1));
}