#include<stdio.h>
int main()
{
    int n,a[n];
    int i,j,great=0;
    printf("How many number?");
    scanf("%d",&n);
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        great=a[i];
        for(j=i; j<n; j++)
        {
            great=great>a[j]?great:a[j]; // checking for greatest number 
        }
        //swaping values of an array
        for(j=i; j<n; j++)
        {
            if(a[j]==great)
            {
                a[j]=a[i];  
                a[i]=great;
            }
        }
        if(i==1)
        {
            printf("\nsecond greatest number is %d",a[i]);
            break;
        }
    }
    return 0;
}