//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure
#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float total_percent;
};
int main()
{
    struct student info[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("\nEnter detail of %d student",i+1);
        printf("\nEnter Roll number: ");
        scanf("%d",&info[i].roll_no);
        fflush(stdin);
        printf("\nEnter name: ");
        fgets(info[i].name,20,stdin);
        printf("\nEnter mark in chemistry: ");
        scanf("%f",&info[i].chem_marks);
        printf("\nEnter mark in mathematics: ");
        scanf("%f",&info[i].maths_marks);
        printf("\nEnter mark in physics: ");
        scanf("%f",&info[i].phy_marks);
        info[i].total_percent= (info[i].chem_marks+info[i].maths_marks+info[i].phy_marks)/3;
    }
    printf("\nDetails of student");
    for(i=0; i<3; i++)
    {
        printf("\nDetails of %d student",i+1);
        printf("\nRoll number: %d",info[i].roll_no);
        printf("\nName: %s",info[i].name);
        printf("\nMarks in chemistry: %.2f",info[i].chem_marks);
        printf("\nMarks in mathematics: %.2f",info[i].maths_marks);
        printf("\nMarks in physics: %.2f",info[i].phy_marks);
        printf("\nTotal percentage: %.2f",info[i].total_percent);
        printf("\n");
    }
    return 0;
}