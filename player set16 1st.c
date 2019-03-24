
#include <stdio.h>
void main()
{
	char a[30];
	scanf("%s",a);
	int count=0,flag=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='b')
			flag=1;
		
		else
			count=count+1;
		
	}
	if(flag==1 && count==1)
		printf("yes");
	else 
		printf("no");
	
}
