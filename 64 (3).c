//function to merge two arrays of same size in decending order
#include<stdio.h>
void merg(int *, int *, int);
int main()
{
    int n;
    int a[n],b[n];
    int i;
    printf("How many element?\n");
    scanf("%d",&n);
    printf("\nEnter %d element for first array: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter %d element for second array: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    merg(a,b,n);
    return 0;
}
void merg(int a[], int b[], int n)
{
    int s[2*n];
    int i,j,count=0,cont;
    for(i=0; i<2*n; i++)
    {
        if(i<n)
        {
            s[i]=a[i];
        }
        else
        {
            s[i]=b[count];
            count++;
        }
    }
    for(i=0; i<2*n; i++)
    {
        cont=s[i];
        for(j=i+1; j<2*n; j++)
        {
            cont=cont>s[j]?cont:s[j];
        }
        for(j=i; j<2*n; j++)
        {
            if(s[j]==cont)
            {
                s[j]=s[i];
                s[i]=cont;
            }
        }
    }
    printf("\nArray after merge and sort is: ");
    for(i=0; i<2*n; i++)
    {
        printf("%d ",s[i]);
    }
}