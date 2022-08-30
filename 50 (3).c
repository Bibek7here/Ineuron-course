//program to check whether a given number is prime or not
#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(check(n)==1)
    {
        printf("\nGiven number is prime");
    }
    else
    {
        printf("\nGiven number is not prime");
    }
    return 0; 
}
int check(int n)
{
    int i,count=0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            count=1;
            return 0;
        }
    }
    if(count==0)
    {
        return 1;
    }
}