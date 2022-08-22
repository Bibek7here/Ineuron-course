//program to print first N even natural number
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("how many first even natural number:  ");
	scanf("%d",&n);
	for(i=1; i<=n*2; i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("the sum of first %d even natural number is %d",n,sum);
	return 0;
}
