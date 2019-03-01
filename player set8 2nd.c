
#include <stdio.h>

int main()
{
    int n,i,a[50],j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(t<a[i])
        {
            t=a[i];
        }
        
    }
   
    printf("%d",t);
    return 0;
}
