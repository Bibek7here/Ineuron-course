//program to determine whether the given matrix is sparse or not
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,count1=0,count2=0;
    printf("Enter elements of matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    if(count1>count2)
    {
        printf("\nThe given matrix is sparse matrix");
    }
    else
    {
        printf("\nThe given matrix is not sparse matrix");
    }
}