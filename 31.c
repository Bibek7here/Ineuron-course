//program to write menu driven program
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int n1,n2;
    printf("a.Addition\nb.Subtraction\nc.Multiplication\nd.Division\ne.exit\n");
    printf("\nEnter your choice: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
            printf("\nEnter two number for addition: ");
            scanf("%d%d",&n1,&n2);
            printf("\nsum is %d",n1+n2);
            break;
        case 'b':
            printf("\nEnter two number for subtraction: ");
            scanf("%d%d",&n1,&n2);
            printf("\nSubtraction is %d",n1-n2);
            break;
        case 'c':
            printf("\nEnter two number for multiplication: ");
            scanf("%d%d",&n1,&n2);
            printf("\nMultiple is %d",n1*n2);
            break;
        case 'd':
            printf("\nEnter two number for division: ");
            scanf("%d%d",&n1,&n2);
            printf("\nDivision is %d",n1/n2);
            break;
        case 'e':
            exit(0);
        default : 
            printf("\nYou have entered wrong choice!!");
    }
    return 0;
}