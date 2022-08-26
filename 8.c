//program to find next prime number of a given number
#include<stdio.h>
int main()
{
    int n,i,isprime;
    int j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n; i>=n; i++)
    {
        isprime=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
   			printf("\nNext prime number of a number is %d",i);
            break;
        }
    }
    return 0;

}
