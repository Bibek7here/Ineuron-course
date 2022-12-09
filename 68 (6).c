// program to create authentication system (menu driven)
#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][2][20];
    char user[20],pass[20];
    int i,j,count;
    for(i=0; i<5; i++)
    {
        printf("Enter %d username and passsword : ",i+1);
        for(j=0; j<2; j++)
        {
            fgets(s[i][j],20,stdin);
        }
    }
    printf("\nEnter username: ");
    fgets(user,20,stdin);
    printf("\nEnter password: ");
    fgets(pass,20,stdin);
    for(i=0; i<5; i++)
    {
        for(j=0; j<2; j++)
        {
            count=0;
            if(strcmp(s[i][j],user)==0)
            {
                if(strcmp(s[i][j+1],pass)==0)
                {
                    count=1;
                    break;
                }
            }
        }
        if(count==1)
        {
            printf("\nEntered username and password is valid");
            break;
        }
    }
    if(count==0)
    {
        printf("\nEntered username and password is invalid ");
    }
    return 0;
}
