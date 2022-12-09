//program to print the strings which are palindrome in the list of strings
#include<stdio.h>
int main()
{
    char s[3][20];
    int i,j,k,temp,count;
    printf("Enter 3 string: ");
    for(i=0; i<3; i++)
    {
        fgets(s[i],20,stdin);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; s[i][j]; j++)
        {
            if(s[i][j+1]=='\0')
            {
                temp=0;
                count=0;
                for(k=j-1; k>=j/2; k--)
                {
                    if(s[i][k]!=s[i][temp])
                    {
                        count=1;
                        break;
                    }
                    temp++;
                }
                if(count==0)
                {
                    printf("\n%s",s[i]);
                }
                else
                {
                    break;
                }
            }
        }
    }
    return 0;
}