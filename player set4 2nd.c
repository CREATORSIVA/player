#include <stdio.h>



int main(void) 

{

	int n,k,a[50];
	int i,c=0;
	scanf("%d%d",&n,&k);
	for(i=0;a[i]!='\0';i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;a[i]!='\0';i++)
	{
	    if(k==a[i])
	    {
	        c++;
	    }
	}
	if(c==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;

}
