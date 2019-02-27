#include <stdio.h>

int main()
{
    int n,i,j,a[50],k=0;
    scanf("%d",&n);
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        
      scanf(" %d",&a[i]); 
    }
    n=n-k;
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    
    return 0;
}
