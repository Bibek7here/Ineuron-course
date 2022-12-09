//write a program to search a string in the list of strings
#include<stdio.h>
int main()
{
    char s[3][20];
    char a[20];
    int i,j,temp=0,count;
    printf("Enter the strings: ");
    for(i=0; i<3; i++)
    {
        fgets(s[i],20,stdin);
    }
    printf("\nEnter string to search: ");
    fgets(a,20,stdin);
    //searching the string by encountering strings index value 
    for(i=0; i<3; i++)
    {
        //checking if index value is equal or not
        //if equal then compare each other
        if(s[i][temp]==a[temp])
        {
            count=0;
            for(j=0; a[j] || s[i][j]; j++)
            {
                if(s[i][j]!=a[j])
                {
                    count=1;
                    break;
                }
            }
            if(count==0)
            {
                break;
            }
        }
    }
    if(count==0)
    {
        printf("\nEntered string is in the list");
    }
    else
    {
        printf("\nEntered string is not in the list");
    }
    return 0;
}