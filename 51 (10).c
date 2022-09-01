//program to print reverse of a given number using recursive function
#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nThe reverse of given number %d is:",n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n==0)
    {
        //doing nothing
        //not to print zero at initial position
    }
    else
    {
        printf("%d",n%10);
        reverse(n/10);
    }
}