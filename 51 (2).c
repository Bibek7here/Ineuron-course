//program to print first N natural numbers in reverse order
#include<stdio.h>
void nat(int);
int main()
{
    int n;
    printf("How many first natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d natural number are:\n",n);
    nat(n);
    return 0;
}
void nat(int n)
{
    if(n==1)
    {
        printf("%d ",n);
    }
    else
    {
        printf("%d ",n);
        nat(n-1);
    }
}