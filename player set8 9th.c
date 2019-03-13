#include <stdio.h>
int main() 
{
    int n,a[10],i,j,diff,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	   if(a[i]>a[j])
	   {
	       diff=a[i]-a[j];
	   }
	   else
	   {
	        diff=a[j]-a[i];  
	   }
	   if(diff>max)
	   {
	       max=diff;
	   }
	 }
	}
	printf("%d",max);
	return 0;
}
