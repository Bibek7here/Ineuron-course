//program to make an array size of 10 and take input from user and sum of given number
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 number: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nSum of a given number is %d",sum);
    return 0;
}