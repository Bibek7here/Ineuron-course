//program to print first N natural numbers using function (TSRN)
#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("How many first natural number?\n");
    scanf("%d",&n);
    printf("\nFirst %d natural number are: \n",n);
    natural(n);
    return 0;
}
void natural(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}