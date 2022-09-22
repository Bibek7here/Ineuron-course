#include<stdio.h>
int main()
{
    int n,a[n],b[n];
    int i;
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\nCopied array numbers are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}