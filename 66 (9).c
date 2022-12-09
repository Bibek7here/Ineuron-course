//write a program to sort a string array in ascending prder
#include<stdio.h>
int main()
{
    char s[10]="askjhfl";
    char temp;
    int i,j;
    for(i=0; s[i]; i++)
    {
        temp=s[i];
        for(j=i; s[j]; j++)
        {
            temp=temp<s[j]?temp:s[j];
        }
        for(j=i; s[j]; j++)
        {
            if(temp==s[j])
            {
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
    printf("%s",s);
    return 0;
}