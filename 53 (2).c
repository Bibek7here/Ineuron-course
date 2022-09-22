#include<stdio.h>
int main()
{
    int a[10],i,small=0;
    printf("Enter 10 number: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0; i<10; i++)
    {
        small=small<a[i]?small:a[i];
    }
    printf("\nSmallest among the number is %d",small);
}