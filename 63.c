//program to reverse a number
#include<stdio.h>
int main()
{
	int n,temp,rev=0;
	printf("enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	printf("the reverse of %d is %d",temp,rev);
	return 0;
}
