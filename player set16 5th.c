/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,t=0,j;
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);

	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	for(i=0;i<k;i++)
	printf("%d ",a[i]);

	for(i=k;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	for(i=k;i<n;i++)
	printf("%d ",a[i]);
	
	
}
