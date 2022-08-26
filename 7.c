//program to find prime number between two number
#include<stdio.h>
int main()
{
    int n1,n2,isprime;
    int i,j;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    for(i=n1 ; i<=n2 ; i++)
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
            if(i>1)
            {
            	printf("%d ",i);
			}
        }
    }
    return 0;
}
