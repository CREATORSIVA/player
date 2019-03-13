#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum=0,res;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	res=sum;
	printf("%d",res);
	return 0;
}
