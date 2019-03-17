#include <stdio.h>
int main(void) 
{
	int num,rem,sum=0;
	scanf("%d",&num);
	while(num!=0)
	{
	    rem=num%10;
	    sum=sum+rem;
	    num=num/10;
	}
	if(sum%2==0)
	{
	    printf("E..that is even");
	}
	else
	{
	    printf("O..that is odd");
	}
	return 0;
}
