//function to print all unique elements of an array
#include<stdio.h>
void unique(int *,int);
int main()
{
    int n,a[n];
    int i;
    printf("how many element?\n");
    scanf("%d",&n);
    printf("\nEnter %d element: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAll unique elements in an array are: ");
    unique(a,n);
    return 0;
}
void unique(int a[], int n)
{
    int i,j,k,count;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            count=1;
            for(k=i-1; k>=0; k--)
            {
                if(a[i]==a[k])
                {
                    count=0;
                    break;
                }
            }
            if(a[i]==a[j+1])
            {
                count=0;
                break;
            }
            else if(count==0)
            {
                break;
            }
        }
        if(count==1)
        {
            printf("%d\n",a[i]);
        }
    }
}