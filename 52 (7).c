//program to calculate sum of first N natural number
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("How many first natural number?\n");
    scanf("%d",&n);
    printf("\nSum of first %d natural number is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    int add=0;
    if(n==1)
    {
        return 1;
    }
    add=n+sum(n-1);
    return add;
}