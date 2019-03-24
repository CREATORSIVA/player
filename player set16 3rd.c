#include <stdio.h>

void main()
{
	char a[30];
	int i,k;
	scanf("%s %d",a,&k);
	for(i=k-1;a[i]!='\0';i=i+k)
		printf("%c ",a[i]);
}
