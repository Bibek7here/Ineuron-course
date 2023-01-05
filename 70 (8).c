//Write a function to take input employee data from the user. [ Refer structure from question 1
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
void inpt(struct employee);
int main()
{
    struct employee s;
    inpt(s);
    return 0;
}
void inpt(struct employee s)
{
    printf("Enter id: ");
    scanf("%d",&s.id);
    fflush(stdin);
    printf("\nEnter employee name: ");
    fgets(s.name,20,stdin);
    printf("\nEnter salary: ");
    scanf("%f",&s.salary);
}