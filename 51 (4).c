//program to print first N odd natural number in reverse order using recursion
#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("How many first odd natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d odd natural number are:\n",n);
    odd(n);
    return 0;
}
void odd(int n)
{
    if(n==1)
    {
        printf("%d ",n);    
    }
    else
    {
        printf("%d ",2*n-1);
        odd(n-1);
    }
}