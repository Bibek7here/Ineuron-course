//program to calculate LCM of two numbers using function
#include<stdio.h>
int lcmof(int,int);
int main()
{
    int n1,n2;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    printf("\nLCM of given two number is %d",lcmof(n1,n2));
    return 0;
}
int lcmof(int n1, int n2)
{
    int l;
    for(l=n1>n2?n1:n2; l<=n1*n2; l=l+(n1>n2?n1:n2))
    {
        if(l%n1==0 && l%n2==0)
        {
            return l;
        }
    }
}