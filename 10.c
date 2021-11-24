// 2nd NOV 2021 11:20 PM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
// Defination of structure Employee_Detail
struct Employee_Detail
{
    int Employee_id;
    char Name[50];
    char Designation[30];
    float Salary;
};
// Creating structure variable
struct Employee_Detail E1;

int main()
{
    // Taking details in input
    printf("Enter your id, Name, your designation and your salary :\n");
    scanf("%d",&E1.Employee_id);
    scanf("%s",&E1.Name);
    scanf("%s",&E1.Designation);
    scanf("%f",&E1.Salary);
    // Printing it using dot operator
    printf("Employee_id of %d with name %s and posted as %s of Salary %f is you",E1.Employee_id,E1.Name,E1.Designation,E1.Salary);
}