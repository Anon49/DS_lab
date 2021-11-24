// 31st OCT 2021 10:02 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
int main()
{
    int number,count=0;
    printf("Enter a number to find whether its prime or not : ");
    scanf("%d",&number);
    // RUNNING LOOP FROM 3 TO N/2 TO SHORTEN LOOP AND INC. count VARIABLE TO HAVE NON-ZERO VALUE IF ITS NOT PRIME 
    for(int i=3;i<=number/2;i++)
    {
        if(number%i==0)
        count++;
        else
        continue;
    }
    // IF CONDITION ONLY EXECUTES IF COUNT IS NON ZERO
    if(count)
    printf("Sorry, given number is not prime\n");
    else
    printf("Given number is a Prime number\n"); 
    return 0;
}