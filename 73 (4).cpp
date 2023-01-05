//Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int n1,n2,result;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    result=max(n1,n2);
    printf("\nMaximum number between two number is %d",result);
    return 0;
}
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}