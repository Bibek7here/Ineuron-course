//program to print star pattern
#include<stdio.h>
int main()
{
    int i,j;
    char c,d;
    for(i=1; i<=5; i++)
    {
        c='A';
        d='A';
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(j<5)
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