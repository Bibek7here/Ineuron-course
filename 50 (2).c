//program to calculate HCF of two numbers using function
#include<stdio.h>
int check(int,int);
int main()
{
    int n1,n2;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    printf("\nHCF of given two number is %d",check(n1,n2));
    return 0;
}
int check(int n1, int n2)
{
    int h;
    for(h=n1<n2?n1:n2; h>=1; h--)
    {
        if(n1%h==0 && n2%h==0)
        {
            return h;
        }
    }
}