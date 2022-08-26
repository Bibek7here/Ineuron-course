//program to check whether two given number are co-prime or not
#include<stdio.h>
int main()
{
    int n1,n2,h,hcf;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    for(h=n1<n2?n1:n2; h>=1; h--)
    {
        if(n1%h==0 && n2%h==0)
        {
            break;
        }
    }
    if(h==1)
    {
        printf("\nGiven two number is co-prime");
    }
    else
    {
        printf("\nGiven two number is not co-prime");
    }
    return 0;
}