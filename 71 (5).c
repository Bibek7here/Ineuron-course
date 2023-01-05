//Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,i;
    int *ptr;
    printf("How  many number?\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory allocation failed!");
        return 0;
    }
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+ptr[i];
    }
    printf("\nAverage is %d",sum/n);
    free(ptr);
    return 0;
}