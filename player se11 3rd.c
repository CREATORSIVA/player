#include <stdio.h>

int main()
{
   int a[1000],n,i,sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i!=n-1)
       {
       sum=sum+(a[i]+a[i+1]);
       }
   }
   printf("%d",sum);
    return 0;
}
