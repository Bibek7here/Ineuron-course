//program to find factorial of a number
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter a number:  ");
	scanf("%d",&n);
	for(i=n; i>=1; i--)
	{
		fact*=i;
	}
	printf("the factorial of %d is %d",n,fact);
	return 0;
}
