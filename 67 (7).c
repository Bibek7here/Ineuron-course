//function to reverse the string word wise
#include<stdio.h>
void rev(char *);
int main()
{
    char s[30];
    printf("Enter string: ");
    fgets(s,30,stdin);
    rev(s);
    printf("\nString after reverse is %s",s);
    return 0;
}
void rev(char s[])
{
    int i,j,temp=0,count=0,check=0;
    char c;
    //reversing the string
    for(i=0; s[i]; i++)
    {
        if(s[i+1]=='\0')
        {
            for(j=i; j>i/2; j--)
            {
                c=s[temp];
                s[temp]=s[j];
                s[j]=c;
                temp++;
            }
        }
    }
    for(i=0; s[i]; i++)
    {
        check++; // to iterate loop ending condition and to count number of element in the word
        if(s[i+1]==32 || s[i+1]=='\0')
        {
            // defining the value of count to encounter the base element of the word
            count=i-(check-1); // as i start with zero check variable will me one more value than i
            // reversing the word only
            for(j=i; j>i-check/2; j--)
            {
                {
                    c=s[count];
                    s[count]=s[j];
                    s[j]=c;
                    count++;
                }
            }
        }
        if(s[i+1]==32)
        {
            check=0; // to count number of element in another word
        }
    }
}