//program to print star pattern
#include<stdio.h>
int main()
{
    int i,j;
    char c,d;
    for(i=1; i<=4; i++)
    {
        c='A';
        d='A';
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<4)
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
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}