//Write a function to sort employees according to their names [refer structure from question 1
#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
void sort(struct employee arr[]);
int main()
{
    struct employee arr[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter id: ");
        scanf("%d",&arr[i].id);
        fflush(stdin);
        printf("\nEnter name: ");
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
    struct employee temp;
    int i,j;
    char temporary[20];
    for(i=0; i<4; i++)
    {
        for(j=i; j<4; j++)
        {
            if(strcmp(arr[i].name,arr[j].name)==1)
            {
                strcpy(temporary,arr[j].name);
            }
        }
        for(j=i; j<4; j++)
        {
            if(strcmp(arr[j].name,temporary)==0)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}