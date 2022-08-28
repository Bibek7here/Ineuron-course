#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\nGood");
            break;
        case 2:
            printf("\nBetter");
            break;
        case 3:
            printf("\nBest");
            break;
        default:
            printf("\nInvalid");
    }
    return 0;
}