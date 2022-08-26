//program to find whether a given number is an armstrong or not
#include<stdio.h>
int main()
{
	int n,temp,sum=0,digit;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		sum=sum+digit*digit*digit;
		n/=10;
	}
	if(temp==sum)
	{
		printf("\nGiven number is an armstrong number");
	}
	else
	{
		printf("\nGiven number is not an armstrong number");
	}
	return 0;
}
