//program to find Nth term of the fibonnaci series
#include<stdio.h>
int main()
{
	int n,first=0,second=1,third=0,i=3;
	printf("which term: ");
	scanf("%d",&n);
	if(n==1)
		printf("%d term of fibonnaci series is %d",n,first);
	if(n==2)
		printf("%d term of fibonnaci series is %d",n,second);
	else
	{
		while(i<=n)
		{
			third=first+second;
			first=second;
			second=third;
			i++;
		}
		printf("%d term of fibonnaci series is %d",n,third);
	}
	return 0;
}
