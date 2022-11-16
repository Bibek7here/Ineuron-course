//program to calculate the sum of left diagonals of a matrix
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum=0;
    printf("\nEnter elements of a matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            if(j==i)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nSum of left diagonal of given matrix is %d",sum);
    return 0;
}