//program to convert even number into its upper nearest odd number using switch statement
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
            printf("\nUpper nearest odd number of %d is %d",n,n+1);
            break;
        case 0:printf("\n%d is odd number",n);
            break;
    }
    return 0;
}