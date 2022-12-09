//function to transform the string into uppercase
#include<stdio.h>
void transfo(char *);
int main()
{
    char s[20];
    printf("Enter string:");
    fgets(s,20,stdin);
    transfo(s);
    printf("\nstring after transforming: %s",s);
    return 0;
}
void transfo(char s[])
{
    int i;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
}