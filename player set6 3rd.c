#include <stdio.h>



int main(void) 

{

	char a[60];
	int i,l=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	    l++;
	}
	printf("%d",l);
	return 0;

}
