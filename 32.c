//program to takes days number of a week and display unique greeting message for the day
#include<stdio.h>
int main()
{
    int n;
    printf("which day: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\nKeep it up, you are doing well!");
            break;
        case 2:
             printf("\nI'm happy for you");
             break;
        case 3:
            printf("\nYou are the best!");
            break;
        case 4:
            printf("\nHave a good day");
            break;
        case 5:
            printf("\nThank you for always delivering the best");
            break;
        case 6:
            printf("\nI'm inspired to do more");
            break;
        case 7:
            printf("\nHappy weekend my love");
            break;
        default:
            printf("\nYou have entered wrong day number!!");
    }
    return 0;
}