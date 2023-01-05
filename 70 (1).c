//Write a function to sort employees according to their salaries [ refer structure from question 1
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
void sort(struct employee *);
int main()
{
    struct employee arr[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter id: ");
        scanf("%d",&arr[i].id);
        fflush(stdin);
        printf("\nEnter employee name: ");
        fgets(arr[i].name,20,stdin);
        printf("\nEnter salary: ");
        scanf("%f",&arr[i].salary);
    }
    sort(arr);
    printf("\nDetails of Employee after sorting: ");
    for(i=0; i<4; i++)
    {
        printf("\n%d\n%s%.2f",arr[i].id,arr[i].name,arr[i].salary);
    }
    return 0;
}
void sort(struct employee arr[])
{
    struct employee b;
    int i,j,temp;
    for(i=0; i<4; i++)
    {
        temp=arr[i].salary;
        for(j=i; j<4; j++)
        {
            temp=temp<arr[j].salary?temp:arr[j].salary;
        }
        for(j=i; j<4; j++)
        {
            if(arr[j].salary==temp)
            {
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }
        }
    }
}