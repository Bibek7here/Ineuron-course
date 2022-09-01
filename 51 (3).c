//program to find first N odd natural number  using recusive 
#include<stdio.h>
void nat(int);
int main()
{
    int n;
    printf("How many first natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d odd natural number are:\n",n);
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
        nat(n-1);
        printf("%d ",2*n-1);
    }
}