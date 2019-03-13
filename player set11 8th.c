#include <stdio.h>

int main(void) 
{
	int num;
	scanf("%d",&num);
	int a[num],i,sum=0;
	for(i=0;i<num;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum=sum+a[i];
		printf("%d ",sum);
	}
	return 0;
}
