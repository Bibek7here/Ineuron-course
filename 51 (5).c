//program to find first N even natural number using recusive 
#include<stdio.h>
void nat(int);
int main()
{
    int n;
    printf("How many first natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d even natural number are:\n");
    nat(n);
    return 0;
}
void nat(int n)
{
    if(n==1)
    {
        printf("%d ",2*n);
    }
    else
    {
        nat(n-1);
        printf("%d ",2*n);
    }
}