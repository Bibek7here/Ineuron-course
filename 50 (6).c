//program to print prime number between given two number using function
#include<stdio.h>
int primebet(int,int);
int main()
{
    int n1,n2;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    printf("\nPrime number between given two number are:\n");
    primebet(n1,n2);
    return 0;
}
int primebet(int n1, int n2)
{
    int i,j,count;
    for(i=n1+1; i<=n2; i++)
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
        }
    }
}