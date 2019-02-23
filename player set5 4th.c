#include <stdio.h>
#include<string.h>
int main()
{
	int k,temp=0,i,j,n;
	char a[50];
	scanf("%s",a);
    scanf("%d",&k);
	n=strlen(a);
	if(n<=10000)
    for(i=0;i<k;i++)
    {
    temp=a[n-1];
    for(j=n-1;j>=0;j--)
    {
	       a[j]=a[j-1];

	 }	    a[0]=temp;

	}
	for(i=0;i<n;i++)
{	    printf("%c",a[i]);
	}
return 0;
    }
