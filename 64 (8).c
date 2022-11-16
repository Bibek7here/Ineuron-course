//program to rotate an array by n position in d direction using function
#include<stdio.h>
int left(int *,int);
int right(int *,int);
int main()
{
    int n,a[n],i;
    char d;
    printf("How many number?\n");
    scanf("%d",&n);
    printf("\nEnter %d numbers: ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    fflush(stdin);
    printf("\nEnter L for left rotation or R for right rotation: ");
    scanf("%c",&d);
    if(d=='l' || d=='L')
    {
        left(a,n);
        printf("Array after change are: ");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else if(d=='r' || d=='R')
    {
        right(a,n);
        printf("Array after change are: ");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("\nYou have entered wrong choice!!");
    }
    return 0;
}
int left(int a[],int n)
{
    int i,b=0,r;
    int c[n];
    printf("\nFrom which position to rotate : ");
    scanf("%d",&r);
    //copying number of an array into another array
    for(i=0; i<n; i++)
    {
        c[i]=a[i];
    }
    for(i=r; i<n; i++)
    {
        a[b]=c[i];
        b++;
        //after reaching highest index going back to base index
        if(i==n-1)
            i=-1;// assigning value of i=-1, after loop end i will be increase by 1 i.e i++ which indicate base index
        if(b==n)
            break;
    }
    return 0;
}
int right(int b[],int n)
{
    int i,r,j=0;
    int c[n];
    printf("\nFrom which position to rotate: ");
    scanf("%d",&r);
    for(i=0; i<n; i++)
    {
        c[i]=b[i];
    }
    for(i=r-2; i<n; i--)
    {
        b[j]=c[i];
        //after reaching base index, indicating highest index
        if(i<=0)
            i=n;
        if(j==n-1)
            break;
        
        j++;
    }
    return 0;
}
