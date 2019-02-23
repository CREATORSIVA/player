#include <stdio.h>

int main()
{
    int i,j,n,c=0,a[30][40];
    scanf("%d",&n);
    if(n<=10000)
    for(i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else  if(n==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
