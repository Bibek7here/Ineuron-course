//program to calculate sum of first N even natural number
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("How many first odd natural number?\n");
    scanf("%d",&n);
    printf("\nSum of first %d even natural number is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    int add=0;
    if(n==1)
    {
        return 2*n;
    }
    add=2*n+sum(n-1);
    return add;
}