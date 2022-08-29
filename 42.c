//program to check whether a given number is even or odd
#include<stdio.h>
int evenodd(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(evenodd(n)==1)
    {
        printf("\nGiven number is even");
    }
    else
    {
        printf("\nGiven number is odd");
    }
    return 0;
}
int evenodd(int n)
{
    if(n%2)
        return 0;
    else
        return 1;
}