//program to find lcm of two number
#include<stdio.h>
int main()
{
	int n1,n2,lcm;
	printf("Enter two number: ");
	scanf("%d%d",&n1,&n2);
	for(lcm=n1>n2?n1:n2; lcm<=n1*n2; lcm++)
	{
		if(lcm%n1==0 && lcm%n2==0)
			break;
	}
	printf("the lcm is %d",lcm);
	return 0;
}
