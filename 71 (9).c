//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,check;
    printf("How many number?\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory alllocation failed!");
        return 0;
    }
    printf("\nEnter %d element: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    check=ptr[0];
    for(i=0; i<n; i++)
    {
        check=check>ptr[i]?check:ptr[i];
    }
    printf("\nThe largest element is %d",check);
    free(ptr);
    return 0;
}