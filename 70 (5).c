//Write a program to store information of n students and display them using structure
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    int n,i;
    struct student info[n];
    printf("\nHow many stutent details?\n");
    scanf("%d",&n);
    printf("Enter details of students: ");
    for(i=0; i<n; i++)   
    {
        printf("\nEnter detail of %d student",i+1);
        printf("\nEnter Roll: ");
        scanf("%d",&info[i].roll);
        fflush(stdin);
        printf("\nEnter name: ");
        fgets(info[i].name,20,stdin);
        printf("\nEnter marks: ");
        scanf("%f",&info[i].marks);
    }
    printf("\nDetails of students are: ");
    for(i=0; i<n; i++)
    {
        printf("\n%d %s %.2f",info[i].roll,info[i].name,info[i].marks);
    }
    return 0;
}