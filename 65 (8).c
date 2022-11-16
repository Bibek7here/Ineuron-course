//program to find the row with maximum numbers of 1's 
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,row1=0,row2=0,row3=0;
    printf("Enter element: ");
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
            if(i==0 && a[i][j]==1)
            {
                row1++;
            }
            else if(i==1 && a[i][j]==1)
            {
                row2++;
            }
            else if(i==2 && a[i][j]==1)
            {
                row3++;
            }
        }
    }
    if(row1>row2 && row1>row3)
    {
        printf("\nFirst row has maximum number of 1");
    }
    else if(row2>row1 && row2>row3)
    {
        printf("\nsecond row has maximum number of 1");
    }
    else
    {
        printf("\nThird row has maximum number of 1");
    }
    return 0;
}