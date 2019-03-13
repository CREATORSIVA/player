#include<stdio.h>
int main(void)
{
	long int b;
	int res,sum,i=1;
	scanf("%ld",&b);
	while(b!=0)
	{
		res=b%10;
		sum=sum+res*i;
		i=i*2;
		b=b/10;
	}
	printf("%lx",res);
}
