//program to count alphabets, digit and special characters
#include<stdio.h>
int main()
{
    char s[15]="bibek123@#";
    int i,alp=0,dig=0,spc=0;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
        {
            alp++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            dig++;
        }
        else
        {
            spc++;
        }
    }
    printf("\nThere are %d, %d, %d numbers of alphabers, digits and special character respectively.",alp,dig,spc);
    return 0;
}