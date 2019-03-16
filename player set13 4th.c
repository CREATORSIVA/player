#include <stdio.h>
int main()
{
    int n,a[20],i,j,count=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=2;i<1000;i++)
	{
	    count=0;
	    for(j=0;j<n;j++)
	    {
	        if(i%a[j]==0)
	        {
	            count++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    if(count==n)
	    {
	        printf("%d is the common ",i);
	        flag=1;
	        break;
	    }
	}
	if(flag==0)
	{
	    printf("no");
	}
	return 0;
}
