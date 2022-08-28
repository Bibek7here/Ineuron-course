//program to convet positive number into negative and negative into positive using switch statement
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n<0==1)
    {
        case 1:
            printf("\n%d",-n);
            break;
        case 0:
            printf("\n%d",-n);
            break;

    }
    return 0;
}