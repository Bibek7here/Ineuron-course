//program to print an armstrong numbers under 1000
#include<stdio.h>
int main()
{
	int n,sum,digit,temp;
	printf("Armstrong number under 1000 are:\n");
	for(n=1; n<=1000; n++)
	{
		sum=0;
		temp=n;
		while(temp!=0)
		{
			digit=temp%10;
			sum=sum+digit*digit*digit;
			temp/=10;
		}
		if(n==sum)
		{
			printf("%d ",n);
		}
	}
	return 0;
}
