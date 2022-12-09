//program to ask user to enter username and check the entered username is in the list or not 
//if entered username is in the list then print allowed to calulate the factorial of a number otherwise, an error message is displayed
#include<stdio.h>
int main()
{
    char s[3][30];
    char a[30];
    int i,j,count;
    printf("list of username: ");
    for(i=0; i<3; i++)
    {
        fgets(s[i],30,stdin);
    }
    printf("\nEnter username: ");
    fgets(a,30,stdin);
    for(i=0; i<3; i++)
    {
        count=0;
        for(j=0; s[i][j]; j++)
        {
            //check whether the entered username is equal to the username in the list or not
            if(s[i][j]!=a[j])
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("\nYou are allowed to calculate the factorial of a number");
            break;
        }
    }
    if(count==1)
    {
        printf("\nAn error message is displayed");
    }
    return 0;
}