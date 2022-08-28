//program to take the month number as an input and display number of days in that month number
#include<stdio.h>
int main()
{
    int n;
    printf("which number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\nThere are 31 days in %d month",n);
            break;
        case 2:
            printf("\nNormally, There are 29 days in %d month but 28 days during leap year1",n);
            break;
        case 3:
            printf("\nThere are 31 days in %d month",n);
            break;
        case 4:
            printf("\nThere are 30 days in %d month",n);
            break;
        case 5:
            printf("\nThere are 31 days in %d month",n);
            break;
        case 6:
            printf("\nThere are 30 days in %d month",n);
            break;
        case 7:
            printf("\nThere are 31 days in %d month",n);
            break;
        case 8:
            printf("\nThere are 31 days in %d month",n);
            break;
        case 9:
            printf("\nThere are 30 days in %d month",n);
            break;
        case 10:
            printf("\nThere are 31 days in %d month",n);
            break;
        case 11:
            printf("\nThere are 30 days in %d month",n);
            break;
        case 12:
            printf("\nThere are 31 days in %d month",n);
            break;
        default:
            printf("\nYou have entered wrong month number!!");
            break;
    }
    return 0;
}