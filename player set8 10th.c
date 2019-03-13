#include <stdio.h>
int main() 
{
    int n,a[50],i,j,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0]-a[1];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
            if(a[j]-a[i]<m)
            {
                m=a[j]-a[i];
            }
            }
            if(a[i]>a[j])
            {
            if(a[i]-a[j]<m)
            {
                m=a[j]-a[i];
            }
            }
        }
    }
    printf("%d",m);
	return 0;
}
