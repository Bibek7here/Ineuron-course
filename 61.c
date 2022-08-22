//program to find whether the given number is prime or not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not prime number",n);
	}
	return 0;
}
