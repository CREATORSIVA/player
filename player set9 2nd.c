#include<stdio.h>
void main()
{
	int n,i,h;
    int b[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
			scanf("%d",&b[i]);
	h=b[0];
	for(i=0;i<n;i++)
		h=h&b[i];
	printf("%d",h);
}
