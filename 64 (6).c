//program to find smallest number in an array using function
#include<stdio.h>
int small(int *,int);
int main()
{
    int n,a[n],i;
    printf("How many number?\n");
    scanf("%d",&n);
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nSmallest number is %d",small(a,n));
    return 0;
}
int small(int b[],int n)
{
    int i,temp;
    temp=b[0];
    for(i=0; i<n; i++)
    {
        temp=temp<b[i]?temp:b[i];
    }
    return temp;
}