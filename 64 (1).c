//program to count a total number of duplicate elements in an array using function
#include<stdio.h>
int check(int *,int);
int main()
{
    int n,a[n],i;
    printf("How many number?\n");
    scanf("%d",&n);
    printf("\nEnter %d numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n%d duplicate number",check(a,n));
    return 0;
}
int check(int a[],int n)
{
    int i,j,k,count=1,result=0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count=0;
                for(k=i-1; k>=0; k--)
                {
                    if(a[k]==a[i])
                    {
                        count=1;
                        break;
                    }
                    else
                    {
                        count=0;
                    }
                }
            }
        }
        if(count==0)
        {
            result++;
        }
        count=1;
    }
    return result;
}