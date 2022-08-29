//program to find factorial of a number using function(TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nFactorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    int i,factrol=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        for(i=n; i>=1; i-- )
        {
            factrol=factrol*i;
        }
        return factrol;
    }
}