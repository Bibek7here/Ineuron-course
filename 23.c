//program to print star pattern
#include<stdio.h>
int main()
{
    int i,j;
    char c,d;
    for(i=1; i<=7; i++)
    {
        c='A';
        d='A';
        for(j=1; j<=13; j++)
        {
            if(j<=8-i || j>=6+i)
            {
                if(j<7)
                {
                    printf("%c",c);
                    c++;
                    d++;
                }
                else
                {
                    printf("%c",d);
                    d--;
                }
            }
            else
            {
                if(j<7)
                {
                    printf(" ");
                    c++;
                    d++;
                }
                else
                {
                    printf(" ");
                    d--;
                }
                    

            }
        }
        printf("\n");
    }
    return 0;
}