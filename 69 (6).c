//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int);
int main()
{
    int n,arr[n];
    int i;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("\narray after sorted: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int *p,int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        temp=p[i];
        for(j=i; j<size; j++)
        {
            temp=temp<p[j]?temp:p[j];
        }
        for(j=i; j<size; j++)
        {
            if(p[j]==temp)
            {
                p[j]=p[i];
                p[i]=temp;
            }
        }
    }
}