//program to print binary of a given decimal number using recursive function 
#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("\nBinary of %d is ",n);
    binary(n);
    return 0;
}
void binary(int n)
{
    if(n==1)
    {
        printf("%d",n);
    }
    else
    {
        binary(n/2);
        printf("%d",n%2);
    }
}