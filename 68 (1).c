//program to check odd email addresses in the list of email's address
#include<stdio.h>
int main()
{
    char s[3][40];
    int i,j,count;
    printf("Enter 3 emali address: ");
    for(i=0; i<3; i++)
    {
        fgets(s[i],40,stdin);
    }
    for(i=0; i<3; i++)
    {
        count=0;
        for(j=0; s[i][j]; j++)
        {
            if(s[i][j]==64)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("\nOdd email address is %s",s[i]);
        }
    }
    return 0;
}