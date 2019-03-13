#include <stdio.h>
int main() 
{
    int s,a[50],i,j,m=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0]-a[1];
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
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
