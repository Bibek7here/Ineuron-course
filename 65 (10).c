//program to calculate the product of two matrices each of order 3*3
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,k,l;
    int sum;
    printf("Enter element of first matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter element of second matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}