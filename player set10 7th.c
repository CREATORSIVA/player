#include<stdio.h>
int main(void)

{

	int b,h,a,i,s=0;
	scanf("%d%d",&b,&h);
	for(i=b;i<=h;i++)
	{
		if(i%2!=0)
		{
			s=s+i;
		}
	}
	printf("%d\t",s);
return 0;
}
