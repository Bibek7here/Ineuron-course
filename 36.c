//program to chech whether a year is a leap year or not using switch statement
#include<stdio.h>
int main()
{
    int n;
    printf("Enter year: ");
    scanf("%d",&n);
    switch(n%100==0)
    {
        case 1:switch(n%400==0)
               {
                    case 0:printf("\nNot leap year");
                        break;
                    case 1:printf("\nleap year");
                        break;
               }break;
        case 0:switch(n%4==0)
               {
                    case 0:printf("\nNot leap year");
                        break;
                    case 1:printf("\nleap year");
                        break;
               } 
    }
    return 0;
}
