//Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,max,min;
    printf("How many number?\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory alllocation failed!");
        return 0;
    }
    printf("\nEnter %d element: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    max=ptr[0];
    min=ptr[0];
    for(i=0; i<n; i++)
    {
        max=max>ptr[i]?max:ptr[i];
        min=min<ptr[i]?min:ptr[i];
    }
    printf("\nThe maximum element is %d",max);
    printf("\nThe minimum element is %d",min);
    free(ptr);
    return 0;
}