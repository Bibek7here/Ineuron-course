//program to find the sum of rows and columns of a matrix
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,k,row=0,column=0;
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
        row=0;
        column=0;
        for(j=0; j<3; j++)
        {
            row=row+a[i][j];
            column=column+a[j][i];
        }
        printf("\nSum of Row%d is %d",i+1,row);
        printf("\nSum of column%d is %d",i+1,column);
    }
    return 0;
}