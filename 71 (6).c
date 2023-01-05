//Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,sum=0;
    printf("How many number?\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory allocation failed!");
        return 0;
    }
    printf("\nEnter %d number: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+ptr[i];
    }
    printf("\nSum of all number is %d",sum);
    free(ptr);
    return 0;
}