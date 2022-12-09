//program to find the number of vowel  in each of the 5 strings stored in two dimensional arrays
#include<stdio.h>
int main()
{
    char s[5][20];
    int i,j,k,count,temp;
    printf("Enter string: ");
    for(i=0; i<5; i++)
    {
        fgets(s[i],20,stdin);
    }
    for(i=0; i<5; i++)
    {
        count=0;
        for(j=0; s[i][j]; j++)
        {
            temp=0;
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u')
            {
                for(k=j-1; k>=0; k--)
                {
                    if(s[i][k]==s[i][j])
                    {
                        temp=1;
                        break;
                    }
                }
                if(temp==0)
                {
                    count++;
                }
            }
            else if(s[i][j]=='A' || s[i][j]=='E' || s[i][j]=='I' || s[i][j]=='O' || s[i][j]=='U')
            {
                for(k=j-1; k>=0; k--)
                {
                    if(s[i][k]==s[i][j])
                    {
                        temp=1;
                        break;
                    }
                }
                if(temp==0)
                {
                    count++;
                }
            }
        }
        printf("\n%d string has %d vowel",i+1,count);
    }
    return 0;
}