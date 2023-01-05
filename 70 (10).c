//Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
void check(struct employee *);
int main()
{
    struct employee arr[10];
    int i;
    for(i=0; i<10; i++)
    {
        printf("\nEnter id: ");
        scanf("%d",&arr[i].id);
        fflush(stdin);
        printf("\nEnter employee name: ");
        fgets(arr[i].name,20,stdin);
        printf("\nEnter salary: ");
        scanf("%f",&arr[i].salary);
    }
    check(arr);
    return 0;
}
void check(struct employee arr[10])
{
    int i,temp;
    temp=arr[i].salary;
    for(i=0; i<10; i++)
    {
        temp=temp>arr[i].salary?temp:arr[i].salary;
    }
    for(i=0; i<10; i++)
    {
        if(arr[i].salary==temp)
        {
            printf("\nEmployee id: %d",arr[i].id);
            printf("\nEmployee name: %s",arr[i].name);
            printf("Employee with highest salary i.e %.2f",arr[i].salary);
        }
    }
}