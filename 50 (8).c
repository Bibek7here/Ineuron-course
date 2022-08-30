//program to find the sum of the series
#include<stdio.h>
void output();
int main()
{
    output();
    return 0;
}
void output()
{
    int temp,i,j,sum=0;
    for(i=1 ; i<=5 ; i++)
    {
        temp=1;
        for(j=1 ; j<=i ; j++)
        {
            temp=temp*j;
            if(j==i)
            {
                sum=sum+temp/i;
                break;
            }
        }
    }
    printf("\nThe sum of the given series is %d",sum);
}