//program to print star pattern
#include<stdio.h>
int main()
{
    int i,j,k=1,l;
    for(i=1; i<=4; i++)
    {
        k=1;
        l=1;
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(j<5)
                {
                    printf("%d",k);
                    k++;
                    l++;
                }
                else
                {
                    printf("%d",l);
                    l--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}