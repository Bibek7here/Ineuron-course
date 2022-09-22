//program to count the digits of a given number using recursion
#include<stdio.h>
int digit(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nThere are %d digit in a given number",digit(n));
    return 0;
}
int digit(int n)
{
    int count=1;
    if(n==0)
    {
        return 0;
    }
    count=count+digit(n/10);
    return count;
}