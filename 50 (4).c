//program to print next prime number of a given number
#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nPrime number next to %d is %d",n,check(n));
    return 0;
}
int check(int n)
{
    int i,j,count;
    for(i=n+1; i>=n; i++)
    {
        count=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            return i;
        }
    }
}