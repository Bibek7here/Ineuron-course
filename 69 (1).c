//Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
    int n,arr[n];
    int i,*ptr,sum=0;
    printf("How many elements in an array?\n");
    scanf("%d",&n);
    printf("\nEnter %d numbers of elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0; i<n; i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\nSum of all elements in an array is %d",sum);
    return 0;
}