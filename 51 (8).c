//program to print binary of a given decimal number using recursive function 
#include<stdio.h>
void octal(int);
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("\nOctal of %d is ",n);
    octal(n);
    return 0;
}
void octal(int n)
{
    if(n==0)
    {
        // doing nothing
       // not to print zero at initial position
    }
    else
    {
        octal(n/8);
        printf("%d",n%8);
    }
}