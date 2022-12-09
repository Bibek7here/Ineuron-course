//program to copy one string to another
#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i;
    printf("Enter character: ");

    fgets(a,20,stdin);
    fflush(stdin);
    for(i=0; a[i]; i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("\nstring succesfully copied\n");
    printf("%s",b);
    return 0;
}