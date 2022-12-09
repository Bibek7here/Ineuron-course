//write a program to reverse a string
#include<stdio.h>
int main()
{
    char s[10]={'b','i','b','e','k','t','a'};
    char c;
    int i,j,count=0;
    for(i=0; s[i]; i++)
    {
        if(s[i+1]=='\0')
        {
            for(j=i; j>i/2; j--)
            {
                c=s[count];
                {
                    s[count]=s[j];
                    s[j]=c;
                    count++;
                }
            }
        }
    }
    printf("\nString after reverse: %s",s);
    return 0;
} 