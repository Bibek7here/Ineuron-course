//program to calculate factorial of a given number using recursive function
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nFactorial of a given number is %d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return(n*fact(n-1));
}