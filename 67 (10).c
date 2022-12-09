//function to reverse the string
#include<stdio.h>
void to_rev(char *);
int main()
{
    char s[20];
    printf("Enter the string: ");
    fgets(s,20,stdin);
    to_rev(s);
    printf("\nString after reverse: %s",s);
    return 0;
}
void to_rev(char s[])
{
    int i,j,temp=0;
    char c;
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
}