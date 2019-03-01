
#include <stdio.h>

int main()
{
    int n,i,a[50],j=0,t=0,k=0;
    scanf("%d",&n);
    if(n<=100000)
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
        
            j=i;
        }
        
    }
   
    printf("%d",j+1);
    return 0;
}
