//Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,i,*ptr;
    printf("How many element?\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory allocation failed");
        return 0;
    }
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",ptr[i]);
        sum=sum+ptr[i];
    }
    printf("\nSum of all the elements is %d",sum);
    free(ptr);
    return 0;
}