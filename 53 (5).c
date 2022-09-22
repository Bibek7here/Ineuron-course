//program to find second smallest number in an array
#include<stdio.h>
int main()
{
    int n,a[n];
    int i,j,small=0;
    printf("How many number?");
    scanf("%d",&n);
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        small=a[i];
        for(j=i; j<n; j++)
        {
            small=small<a[j]?small:a[j]; // checking for smallest number 
        }
        //swaping values of an array
        for(j=i; j<n; j++)
        {
            if(a[j]==small)
            {
                a[j]=a[i];  
                a[i]=small;
            }
        }
        if(i==1)
        {
            printf("\nsecond smallest number is %d",a[i]);
            break;
        }
    }
    return 0;
}