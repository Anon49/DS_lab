// 31st OCT 2021 10:33 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
#include<conio.h>
int main()
{
// INITIALISING SIZE OF ARRAY, 2 NUMBERS AND ONE TEMPORARY VARIABLE TO SAVE ITS INDEX
   int arr_size,x,y,temp_pos=-1;
   printf("Enter the size of the array : ");
   scanf("%d",&arr_size);
   int arr[arr_size];
// LOOPING TO STORE ARRAY ELEMENTS
    printf("Enter the elements : ");
    for (int i = 0; i < arr_size; i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Enter 2 numbers to replace the first number with second number : ");
   scanf("%d %d",&x,&y);
//    LOOPING TO CHECK IF THERE'S THAT GIVEN NUMBER IN THE ARRAY OR NOT
   for (int i = 0; i < arr_size; i++)
   {
       if(arr[i]==x)
       {
           temp_pos=i;
           break;
       }
   }
//    IF THERE IS THEN TEMPORARY VARIABLE VALUE WILL NOT BE NEGATIVE
   if (temp_pos<0)
   {
       printf("Element not found\n");
       return 0;
   }
   else
   {
       arr[temp_pos]=y;
   }
//    PRINTING ITS POSITION AND WHOLE ARRAY AFTER CHANGING VALUE
   printf("Index of %d is %d \nElements of array now are ",x,temp_pos);
   for (int i = 0; i < arr_size; i++)
   {
       printf("%d ",arr[i]);
   }
    getch();
}