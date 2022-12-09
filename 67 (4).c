//function to check wheather the given string is alphanumeric string or not
#include<stdio.h>
int check(char *);
int main()
{
    char s[20];
    printf("Enter string: ");
    fgets(s,20,stdin);
    if(check(s)==1)
    {
        printf("\nGiven string is alphanumeric");
    }
    else
    {
        printf("Given string is not alphanumeric");
    }
    return 0;
}
int check(char s[])
{
    int i,alp=0,n=0;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            alp++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            n++;
        }
    }
    if(alp>=1 && n>=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}