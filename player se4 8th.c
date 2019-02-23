#include <stdio.h>

int main()
{
    int i,j,n,c=0,a[30][40];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && i%2==0)
        {
            printf("%d ",i);
        }
    }
return 0;
}
