

#include <stdio.h>
void main()
{
    long int n,r,a[1000],i,s=1,l=0,v=0,n1;
    scanf("%ld",&n);
    n1=n;
    while(n)
    {
        r=n%2;
        n=n/2;
        a[i]=r;
        i++;
        s=s*10;
    }
    a[i]=5;
    for(i=0;a[i]!=5;i++)
      l++;
   for(i=l-1;i>=0;i--)
    {
        v++;
        if(a[i]==1)
        {
            if(n1%2==0)
            {
            printf("%d",v+1);
            break;
            }
            else
            {
                printf("%d",v);
            break;
            }
        }
    }

}
