//function to find frequency of each element of an array
#include<stdio.h>
void fre(int *, int);
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
    fre(a,n);
    return 0;
}
void fre(int a[],int n)
{
    int i,j,k,count,temp;
    for(i=0; i<n; i++)
    {
        temp=0;
        count=0;
        for(j=i; j<n; j++)
        {
            for(k=i-1; k>=0; k--)
            {
                if(a[i]==a[k])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==1)
            {
                break;
            }
            else if(temp==0 && a[i]==a[j+1])
            {
                count++;
            }
        }
        if(temp==0)
        {
            printf("\n%d has %d frequency",a[i],count);
        }
        
    }

}