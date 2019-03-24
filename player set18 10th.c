#include <stdio.h>

int main()
{
    long int n,r,t=0,s=1,i,j=2,r1=1,t1;
    scanf("%lld",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        t=t+(s*r);
        s=s*2;
    }
        for(i=t;i<t*2;i++)
        {
            t1=i;
            r1=1;
            while(t1)
            {
            r1=r1*j;        
            t1--;
            if(r1==i)
            {
                break;
            }
            }
            if(r1==i)
            {
                break;
            }
        }
    
    printf("%lld",r1);

    return 0;
}
