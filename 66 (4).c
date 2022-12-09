//write a program to convert a given string in uppercase
#include<stdio.h>
int main()
{
    char s[10]="bibeK";
    int i;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
        }
    }
    printf("%s",s);
    return 0;
}