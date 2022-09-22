//program to find HCF of two number using recursion
#include<stdio.h>
int hcf(int,int);
int main()
{
    int n1,n2;
    printf("enter two number: ");
    scanf("%d%d",&n1,&n2);
    printf("\nthe hcf of given two number is %d",hcf(n1,n2));
    return 0;
}
int hcf(int n1,int n2)
{
    int i=n1<n2?n1:n2;
    if(n1%i==0 && n2%i==0)
    {
        return i;
    }
    hcf(n1-1,n2-1);
}