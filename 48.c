//program to check whether a given number contains a given digit or not
#include<stdio.h>
int find(int,int);
int main()
{
    int n,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nEnter digit to check: ");
    scanf("%d",&digit);
    if(find(n,digit)==1)
    {
        printf("\n%d is in %d",digit,n);
    }
    else
    {
        printf("\nGiven number does not contains a given digit");
    }
    return 0;
}
int find(int a, int b)
{
    int rem=0;
    while(a!=0)
    {
        rem=a%10;
        if(rem==b)
        {
            return 1;
            break;
        }
       a/=10; 
    }
    if(rem!=b)
    {
        return 0;
    }
}