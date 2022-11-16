//program to find greatest number in an array using function
#include<stdio.h>
int great(int *,int );
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
    printf("Greatest number is %d",great(a,n));
    return 0;
}
int great(int b[],int n)
{
    int i,temp;
    temp=b[0];
    for(i=0; i<n; i++)
    {
        temp=temp>b[i]?temp:b[i];
    }
    return temp;
}