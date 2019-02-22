#include <stdio.h>
int main(void) 
{
  char a[50];
	int i,j,c1,c2;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]=='(')
	    {
	        c1++;
	    }
	    if(a[i]==')')
	    {
	        c2++;
	    }
	}
	if(c1==c2)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;

}
