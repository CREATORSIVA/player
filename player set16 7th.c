#include <stdio.h>

int main()
{
    int n,k,bin=0,rem,count=0,rem2,power=1,mul,a[1000],i=0,j;
    scanf("%d %d",&n,&k);
    mul=n*k;
    while(mul>0)
    {
        rem=mul%2;
        bin=bin+rem*power;
        mul=mul/2;
        power=power*10;
    }
    while(bin>0)
    {
        rem2=bin%10;
        a[i]=rem2;
        bin=bin/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(a[j]==1)
        {
            printf("%d",j+1);
            break;
        }
    }
    return 0;
    
    
    
}
