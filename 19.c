//program to print star pattern
#include<stdio.h>
int main()
{
    int i,j,k=1,l;
    for(i=1; i<=4; i++)
    {
        k=1;
        l=1;
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<4)
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