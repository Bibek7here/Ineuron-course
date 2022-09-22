//program to find power of any number using recursion
#include<stdio.h>
int power(int,int);
int main()
{
    int n,pow;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nEnter power: ");
    scanf("%d",&pow);
    printf("\n%d to power %d is %d",n,pow,power(n,pow));
    return 0;
}
int power(int n, int pow)
{
    int result=0;
    if(pow==1)
    {
        return n;
    }
    result=n*power(n,pow-1);
    return result;
}