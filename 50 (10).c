//program to find the square of any number using the function
#include<stdio.h>
int square(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nSquare of %d is %d",n,square(n));
    return 0;
}
int square(int n)
{ 
    return n*n;
}