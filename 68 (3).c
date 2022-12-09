//From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
int main()
{
    char s[20];
    char c=46;
    int i,count=0,sum=0;
    printf("Enter the ip address: ");
    fgets(s,20,stdin);
    for(i=0; s[i]; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            sum=sum*10+(s[i]-48);
        }
        else if(s[i]==46 || s[i+1]=='\0')
        {
            if(sum>255 || s[i+1]==46)
            {
                count=1;
                break;
            }
            sum=0;
        }
        else
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("\nGiven ip address is not valid");
    }
    else
    {
        printf("\nGiven ip address is valid");
    }
    return 0;
}