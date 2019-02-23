#include <stdio.h>

#include<string.h>

int main(void) 

{

	char a[60],b[60];
	int i,l1=0,l2=0,c=0;
	scanf("%s",a);
	scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]==b[i])
	    {
	        c++;
	    }
	}
	if(c==l1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}

	return 0;

}
