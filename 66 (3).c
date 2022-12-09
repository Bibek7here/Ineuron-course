//program to count vowels in a given string
#include<stdio.h>
int main()
{
    char s[30]="i am learning somthing new";
    int i,j,count=0,temp;
    for(i=0; s[i]; i++)
    {
        temp=0;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            for(j=i-1; j>=0; j--)
            {
                if(s[j]==s[i])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==0)
            {
                count++;
            }
        }
        if(count==5)
        {
            break;
        }
    }
    printf("\nThere are %d number of vowel character",count);
    return 0;
}