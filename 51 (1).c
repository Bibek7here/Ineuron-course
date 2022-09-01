//program to find first N natural number using recusive 
#include<stdio.h>
void nat(int);
int main()
{
    int n;
    printf("How many first natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d natural number are:\n");
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
        printf("%d ",n);
    }
}