#include <stdio.h>

int main(void) 
{
	char str[30];
	scanf("%s",str);
	int j;
	if(str[3]=='0')
	{
		if(str[4]=='1')
		{
			printf("january");
		}
		else if(str[4]=='2')
		{
			printf("february");
		}
		else if(str[4]=='3')
		{
			printf("march");
		}
		else if(str[4]=='4')
		{
			printf("april");
		}
		else if(str[4]=='5')
		{
			printf("may");
		}
		else if(str[4]=='6')
		{
			printf("june");
		}
		else if(str[4]=='7')
		{
			printf("july");
		}
		else if(str[4]=='8')
		{
			printf("august");
		}
		else if(str[4]=='9')
		{
			printf("september");
		}
	}
	else
	{
		if(str[4]=='0')
		{
			printf("october");
		}
		else if(str[4]=='1')
		{
			printf("november");
		}
		else if(str[4]=='2')
		{
			printf("december");
		}
	}
	
	return 0;
}
