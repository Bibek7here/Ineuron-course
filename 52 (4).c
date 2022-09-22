//program to print first N fibonacci series using recursive function
#include<stdio.h>
void fibo(int,int,int);
int main()
{
    int n,first=0,second=1;
    printf("How many first fibonacci series?\n");;
    scanf("%d",&n);
    printf("\nFirst %d fibonacci series are:\n%d ",n,first);
    fibo(n-1,first,second);
    return 0;
}
void fibo(int n, int first, int second)
{
    int third=0;
    third=first+second;
    first=second;
    second=third;
    if(n==1)
    {
        printf("%d ",third);
    }
    else
    {
        printf("%d ",third);
        fibo(n-1,first,second);
    }
}