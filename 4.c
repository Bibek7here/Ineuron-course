//program to find HCF of two numbers
#include<stdio.h>
int main()
{
	int n1,n2,h;
	printf("Enter two number: ");
	scanf("%d%d",&n1,&n2);
	for(h=n1<n2?n1:n2; h>1; h--)
	{
		if(n1%h==0 && n2%h==0)
		{
			printf("HCF of two number %d and %d is %d",n1,n2,h);
			break;
		}
	}
	return 0;
}
