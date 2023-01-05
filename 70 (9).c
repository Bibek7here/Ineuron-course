//Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
struct employee inpt(struct employee);
void display(struct employee);
int main()
{
    struct employee s;
    s=inpt(s);
    display(s);
    return 0;
}
struct employee inpt(struct employee s)
{
    printf("Enter id: ");
    scanf("%d",&s.id);
    fflush(stdin);
    printf("\nEnter employee name: ");
    fgets(s.name,20,stdin);
    printf("\nEnter salary: ");
    scanf("%f",&s.salary);
    return s;
}
void display(struct employee s)
{
    printf("Details of emplayee:\n%d\n%s%f",s.id,s.name,s.salary);
}