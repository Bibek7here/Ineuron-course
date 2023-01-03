//program to swap value of two in variable of calling function (TSRS)
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nvalue after swapped: %d %d",a,b);
    return 0;
}
int swap(int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
    return 0;
}