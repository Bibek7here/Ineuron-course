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
            if(j<=5-i || j>=3+i)
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
                if(j<4)
                {
                    printf(" ");
                    k++;
                    l++;
                }
                else
                {
                    printf(" ");
                    l--;
                }
                    

            }
        }
        printf("\n");
    }
    return 0;
}