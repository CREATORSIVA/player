#include <stdio.h>

int main()
{
    int n,k,i,max=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && k%i==0)
        {
    if(max<i)
    {
        max=i;
    }
        }    
        
    }
printf("%d",max);

    return 0;
}
