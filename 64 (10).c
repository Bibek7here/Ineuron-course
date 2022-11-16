//program to read n numbers of values in an array and display it in reverse order using function
#include<stdio.h>
int display(int *,int);
int main()
{
    int n,a[n],i;
    printf("How many number?\n");
    scanf("%d",&n);
    display(a,n);
    printf("\nThe reverse form of a numbers of an array are:\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int display(int b[],int n)
{
    int i;
    printf("\nEnter %d numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    return 0;
}