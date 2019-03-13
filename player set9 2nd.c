#include<stdio.h>
void main()
{
	int n,i,h;
    int a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	h=a[0];
	for(i=0;i<n;i++)
		h=h&a[i];
	printf("%d",h);
}
