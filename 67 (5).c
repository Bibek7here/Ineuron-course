//function to check whether the string is palindrome or not
#include<stdio.h>
int check(char *);
int main()
{
    char s[20];
    printf("Enter string: ");
    fgets(s,20,stdin);
    if(check(s)==0)
    {
        printf("\nGiven string is palindrome");
    }
    else
    {
        printf("\nGiven string is not palindrome");
    }
    return 0;
}
int check(char s[])
{
    int i,j,temp=0,count=0;
    for(i=0; s[i]; i++)
    {
        if(s[i+1]=='\0')
        {
            for(j=i-1; j>i/2; j--)  //fgets input null character at n position by default and end character in n-1 but store character till n-2 if less than n-1
            {
                if(s[j]!=s[temp])
                {
                    count=1;
                    break;
                }
                temp++;
            }
        }
    }
    return count;
}