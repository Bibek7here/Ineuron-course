//write a program to convert a given string in lowercase
#include<stdio.h>
int main()
{
    char s[10]="bIBEk";
    int i;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    printf("%s",s);
    return 0;
}