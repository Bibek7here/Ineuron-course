//program to read numbers from user of an array and display it in reverse order
#include<stdio.h>
int main()
{
    int n,a[n];
    int i;
    printf("How many number?\n");
    scanf("%d",&n);
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}