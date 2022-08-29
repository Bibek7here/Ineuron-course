//program to calculate the number of combinations
#include<stdio.h>
int select(int,int);
int main()
{
    int n,r;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("\nEnter number select at a time: ");
    scanf("%d",&r);
    printf("\nCombination of number is %d",select(n,r));
    return 0;
}
int select(int n,int r)
{
    int i,j,temp=1,rev=1;
    for(i=n; i>n-r; i--)
    {
        temp=temp*i;
    }
    for(j=r; j>=1;j--)
    {
        rev=rev*j;
    }
    return (temp/rev);
}