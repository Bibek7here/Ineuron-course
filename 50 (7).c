//program to print first N fibonacci series using function
#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("How many first fibonacci number?\n");
    scanf("%d",&n);
    printf("\nFirst %d fibonacci number are:\n");
    fibo(n);
    return 0;
}
void fibo(int n)
{
    int first=0,second=1,third=0,i;
    for(i=1; i<=n; i++)
    {
        printf("%d ",third);
        third=first+second;
        first=second;
        second=third;
    }
}