//program to calculate the sum of all even numbers and sum of all odd numbers of an array
#include<stdio.h>
int main()
{
    int a[10],i;
    int even=0,odd=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)
        {
            odd=odd+a[i];
        }
        else
        {
            even=even+a[i];
        }
    }
    printf("\nSum of all even numbers in an arry is %d",even);
    printf("\nSum of all odd numbers in an arry is %d",odd);
    return 0;
}