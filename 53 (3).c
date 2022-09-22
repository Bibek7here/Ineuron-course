//program to sort elements of an array
#include<stdio.h>
int main()
{
    int a[10],small=0;
    int i,j,k;
    printf("Enter 10 number: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        small=a[i];
        for(j=i; j<10; j++)
        {
            small=small<a[j]?small:a[j]; // checking for smallest number 
        }
        //swaping values of an array
        for(k=i; k<10; k++)
        {
            if(a[k]==small)
            {
                a[k]=a[i];  
                a[i]=small;
            }
        }
        printf("\n%d",a[i]);
    }
    return 0;
}