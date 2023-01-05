//Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    char email[30];
    long long contact;
};
int main()
{
    struct student info[10];
    int i;
    for(i=0; i<10; i++)   
    {
        printf("\nEnter detail of %d student",i+1);
        printf("\nEnter Roll: ");
        scanf("%d",&info[i].roll);
        fflush(stdin);
        printf("\nEnter name: ");
        fgets(info[i].name,20,stdin);
        fflush(stdin);
        printf("\nEnter email: ");
        fgets(info[i].email,20,stdin);
        printf("\nEnter contact: ");
        scanf("%lli",&info[i].contact);
        printf("\n");
    }
    printf("\nDetails of students are: ");
    for(i=0; i<10; i++)
    {
        printf("\n%d\n%s%s%lli",info[i].roll,info[i].name,info[i].email,info[i].contact);
    }
    return 0;
}