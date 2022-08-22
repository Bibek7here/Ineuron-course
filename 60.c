//program to count digits in a number
#include<stdio.h>
int main()
{
	int n,i=0,temp;
	printf("enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		n/=10;
		i++;
	}
	printf("total number of digit in %d is %d",temp,i);
	return 0;
}
