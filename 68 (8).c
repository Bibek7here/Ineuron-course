//program to sort city nmaes stored in two dimensional array
#include<stdio.h>
int main()
{
    char s[10][20];
    char c;
    int i,j,k,l,m,dum=0,temp;
    printf("Enter 10 cities name: ");
    for(i=0; i<10; i++)
    {
        fgets(s[i],20,stdin);
    }
    for(i=0; i<10; i++)
    {
        //checking smallest alphabet in the index value of the cities
        c=s[i][dum];
        for(j=i; j<10; j++)
        {
            c=c<s[j][dum]?c:s[j][dum];
        }
        //after getting smallest alphabet, checking whether the alphabet is repeated or not
        for(j=i; j<10; j++)
        {
            if(s[j][dum]==c)
            {
                //checking smallest alphabet is repeated or not 
                for(k=j+1; k<10; k++)
                {
                    if(c==s[k][dum])
                    {
                        //if the alphabet is repated then comparing the string related to alphaber
                        for(l=0; s[k][l] || s[j][l]; l++)
                        {
                            if(s[k][l+1]!=s[j][l+1])
                            {
                                if(s[k][l+1]<s[j][l+1])
                                {
                                    for(m=0; s[k][m] || s[j][m]; m++)
                                    {
                                        temp=s[j][m];
                                        s[j][m]=s[k][m];
                                        s[k][m]=temp;
                                    }
                                    break;
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                //sorting smallest string into paticular position
                for(k=0; s[i][k] || s[j][k]; k++)
                {
                    temp=s[i][k];
                    s[i][k]=s[j][k];
                    s[j][k]=temp;
                }
                break;

            }
        }
    }
    //printing name of cities after sorting
    for(i=0; i<10; i++)
    {
        printf("\n%s",s[i]);
    }
    return 0;
}