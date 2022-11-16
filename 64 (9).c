//program to find the first occurance of adjacent duplicate values in the array using function
#include<stdio.h>
int check(int *,int);
int main()
{
    int n,a[n],i;
    printf("How many numbers?\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe first occurane of adjacent duplicate value is %d",check(a,n));
    return 0;
}
int check(int b[],int n)
{
    int i,j,num=0,count;
    for(i=0; i<n; i++)
    {
        count=1;
        for(j=i+1; j<n; j++)
        {
            if(b[i]==b[j])
            {
                num=b[i];
                count=0;
                break;
            }
        }
        if(count==0)
        {
            break;
        }
    }
    return num;
}