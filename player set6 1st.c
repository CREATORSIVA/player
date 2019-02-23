#include <stdio.h>



int main(void) 

{

	int n,i,flag=0,a[60],j,temp=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[j]<a[i])
	        {
	            temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	        }
	    }
	}
	printf("%d",a[1]);

	return 0;

}
