//program to find prime factor of a given number
#include<stdio.h>
void primef(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nprime factor of given number are:\n");
    primef(n);
    return 0;
}
void primef(int n)
{
    int i=2,j,count;
    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
        else
        {
            i++;
        }
    }
}