//Given a list of words followed by two words, the task is to find the minimum distance
//between the given two words in the list of words.
#include<stdio.h>
int main()
{
    char s[5][20];
    char a[20],b[20];
    int i,j,k,l;
    int index=0,count,count1;
    printf("words in the list: ");
    for(i=0; i<5; i++)
    {
        fgets(s[i],20,stdin);
    }
    printf("\nEnter the first word: ");
    fgets(a,20,stdin);
    printf("\nEnter the second word: ");
    fgets(b,20,stdin);
    for(j=0; j<5; j++)
    {
        if(s[j][index]==a[index])
        {
            count=0;
            for(k=0; s[j][k] || a[k]; k++)
            {
                if(s[j][k]!=a[k])
                {
                    count=1;
                    break;
                }
            }
            if(count==0)
            {
                for(k=j+1; k<5; k++)
                {
                    if(s[k][index]==b[index])
                    {
                        count1=0;
                        for(l=0; s[k][l] || b[l]; l++)
                        {
                            if(s[k][l]!=b[l])
                            {
                                count1=1;
                                break;
                            }
                        }
                        if(count1==0 && (k-j)>1)
                        {
                            printf("\nMinimum Distance between entered two word is 1");
                            break;
                        }
                        else if(count1==0 && (k-j)==1)
                        {
                            printf("\nEntered two word is just near each other");  
                            break;
                        }
                    }
                }
                if(count1==0)
                {
                    break;
                }
            }
        }
        if(count1==0)
        {
            break;
        }
    }
    return 0;
}
