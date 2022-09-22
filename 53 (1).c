//program to find greatest number in an array
#include<stdio.h>
int main()
{
    int a[10],i,great=0;
    printf("Enter 10 number: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    great=a[0];
    for(i=0; i<10; i++)
    {
        great=great>a[i]?great:a[i];
    }
    printf("\nGreatest among number is %d",great);
    return 0;
}