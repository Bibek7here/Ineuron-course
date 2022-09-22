//program to calculate the average of numbers stored in an array
#include<stdio.h>
int main()
{
    int n[10],i,sum=0;
    float avg;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    avg=sum/10.0;
    printf("\nAverage of given number is %.2f",avg);
    return 0;
}