//program to calculate the number of arrangement
#include<stdio.h>
int per(int,int);
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nEnter number taken at a time: ");
    scanf("%d",&r);
    printf("\nArrangement of a number is %d",per(n,r));
    return 0;
}
int per(int n,int r)
{
    int i,temp=1;
    for(i=n; i>n-r; i--)
    {
        temp=temp*i;
    }
    return temp;
}