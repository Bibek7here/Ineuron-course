//program to write menu diven program
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int n1,n2,n3;
    printf("a.check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\nb.check whether a given set of three numbers are lengths of side of a right angled triangle or not");
    printf("\nc.check whether a given set of three numbers are equilateral triangle or not");
    printf("\nd.Exit");
    printf("\nEnter your choice: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
            printf("\nEnter sides of a triangle: ");
            scanf("%d%d%d",&n1,&n2,&n3);
            if(n1==n2 || n2==n3 || n1==n3)
            {
                printf("\nGiven set of three numbers are lengths of an isosceles triangle");
            }
            else
            {
                printf("\nGiven set of three numbers are not the lengths of an isosceles triangle");
            }
            break;
        case 'b':
            printf("\nEnter sides of a triangle: ");
            scanf("%d%d%d",&n1,&n2,&n3);
            if(n3==n1*n1+n2*n2 || n2*n2==n1*n1+n3*n3 || n1*n1==n2*n2+n3*n3)
            {
                printf("\nGiven set of three numbers are the lengths of side of a right angled triangle");
            }
            else
            {
                printf("\nGiven set of three numbers are not the lengths of side of a right angled triangle");
            }
            break;
        case 'c':
            printf("\nEnter sides of a triangle: ");
            scanf("%d%d%d",&n1,&n2,&n3);
            if(n1==n2 && n2==n3)
            {
                printf("\nGiven set of three numbers are lengths of side of an equilateral triangle");
            }
            else
            {
                printf("\nGiven set of three numbers are not the lengths of side of an equilateral triangle");
            }
            break;
        case 'd':
            exit(0);
        default:
            printf("\nYou have entered wrong choice!!");
    }
    return 0;
}