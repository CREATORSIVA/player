#include <stdio.h>

int main()
{
    int n,k,i,max=0;
    scanf("%d %d",&n,&k);
    if(k<=100000)
    {
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
    }
    else
    {
        printf("invalid");
    }

    return 0;
}
