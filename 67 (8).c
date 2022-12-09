//function to find repeated character in the given string
#include<stdio.h>
void find_ch(char *);
int main()
{
    char s[20];
    printf("Enter string: ");
    fgets(s,20,stdin);
    find_ch(s);
    return 0;
}
void find_ch(char s[])
{
    int i,j,k,temp;
    for(i=0; s[i]; i++)
    {
        temp=0;
        for(j=i+1; s[j]; j++)
        {
            for(k=i-1; k>=0; k--)
            {
                if(s[i]==s[k])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==1)
            {
                break;
            }
            else if(s[i]==s[j])
            {
                printf("\n%c is repeated character",s[i]);
            }
        }
    }
}