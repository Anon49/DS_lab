// 3rd NOV 2021 10:52 AM
// BY DAVE PRIYANK

// INCLUSION OF I/O HEADER FILE
#include<stdio.h>
#include<conio.h>
// Defining structure for Student details
struct STUDENT_DETAIL
{
    long long int Enrollment_no;
    char Name[50];
    short Sem;
    float CPI;
};
int main()
{
    // Creating array of structure to store the data
    struct STUDENT_DETAIL S[5];
    // Loop for taking data from user
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Enrollment no., Name, Semester and CPI of Student%d :\n",i+1);
    scanf("%lld",&S[i].Enrollment_no);
    scanf("%s",&S[i].Name);
    scanf("%hi",&S[i].Sem);
    scanf("%f",&S[i].CPI);
    }
    // Loop for printing out the data which is stored
    for (int i = 0; i < 5; i++)
    {
        printf("Details of Student%d is\n",i+1);
        printf(" Enrollment no : %lld\n Name : %s\n Semester : %d\n CPI : %f\n",S[i].Enrollment_no,S[i].Name,S[i].Sem,S[i].CPI);
    }
    
    return 0;
    getch();
}