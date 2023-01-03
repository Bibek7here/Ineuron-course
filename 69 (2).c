//Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int n,arr[n];
    int i,*ptr;
    printf("How many element?\n");
    scanf("%d",&n);
    printf("\nEnter %d number of element: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=&arr[n-1];

    for(i=0; i<n; i++)
    {
        printf("\n%d",*(ptr-i));
    }
    return 0;
}