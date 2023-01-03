//Write a program to count the number of vowels and consonants in a string using a
#include<stdio.h>
int main()
{
    char s[20],*ptr;
    int i,j,temp,count=0,con=0;
    printf("Enter string: ");
    fgets(s,20,stdin);
    ptr=s;
    for(i=0; *(ptr+i); i++)
    {
        if(*(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u')
        {
            temp=0;
            for(j=i-1; j>=0;j--)
            {
                if(ptr[j]==ptr[i])
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
        else if(ptr[i]>='a' && ptr[i]<='z')
        {
            temp=0;
            for(j=i-1; j>=0; j--)
            {
                if(ptr[j]==ptr[i])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==0)
            {
                con++;
            }
        }
    }
    printf("\nNumber of vowel is %d ",count);
    printf("\nNumber of consonant is %d",con);
    return 0;
}