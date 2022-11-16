//program to tranpose the given matrix 
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j;
    printf("Enter element of first matrix: ");
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
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}