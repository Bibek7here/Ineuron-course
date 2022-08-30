//program to print first N prime number using function
#include<stdio.h>
void check(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nFirst %d prime number are:\n",n);
    check(n);
    return 0;
}
void check(int n)
{
    int i,j,count,a=0;
    for(i=2; i>1; i++)
    {
        count=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
            a++; // For tracking numbers of prime number
        }
        //check whether number of first prime number is equal to a or not
        if(a==n)
        {
            break;
        }
    }
}