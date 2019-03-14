#include <stdio.h>
#include<string.h>
#include<math.h>
int main(void) 
{
	char str[30];
	scanf("%s",str);
	int i,len,value,sum=0;
	len=strlen(str);
	int j=len-1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='F')
		{
			value=(str[i]-65)+10;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			value=str[i]-48;
		}
		sum=sum+(value*(pow(16,j)));
		j--;
	}
	printf("%d",sum);
	return 0;
}
