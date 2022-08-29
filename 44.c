//program to print first N odd natural number using function(TSRN)
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
    int i=1;
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
}