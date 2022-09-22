//program to calculate sum of digit of a given number
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nSum of digit of %d is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    int add=0;
    if(n==0)
    {
        return 0;
    }
    add=n%10+sum(n/10);
    return add;
}