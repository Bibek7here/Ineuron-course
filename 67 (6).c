//function to find number of words in string
#include<stdio.h>
int check(char *);
int main()
{
    char s[20];
    printf("Enter string: ");
    fgets(s,20,stdin);
    printf("\n%d word in the string",check(s));
    return 0;
}
int check( char s[])
{
    int i,count=1;
    for(i=0; s[i]; i++)
    {
        if(s[i]==32)
        {
            count++;
        }
    }
    return count;
}