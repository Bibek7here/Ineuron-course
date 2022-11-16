//program to sort an array of any size using function
#include<stdio.h>
int sort(int *,int);
int main()
{
    int n,a[n],i;
    printf("Enter how many number? \n");
    scanf("%d",&n);
    printf("\nEnter %d number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("\nNumber after sorting are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int sort(int b[], int n)
{
    int i,j,temp=0;
    for(i=0; i<n; i++)
    {
        temp=b[i];
        for(j=i; j<n ; j++)
        {
            temp=temp<b[j]?temp:b[j];
        }
        for(j=i;j<n; j++)
        {
            if(temp==b[j])
            {
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    return 0;
}