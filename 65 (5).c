//program to print lower triangular of a given matrix
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    printf("Enter elements of a matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j<=i)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}