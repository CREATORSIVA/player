#include <stdio.h>

int main()
{
    int n,i,j=0,a[50],b[50],c[40],k=0,d=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=n/2;
    for(i=0;i<d;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(a[j]<a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=d;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
         if(a[j]<a[i])
         {
             t=a[j];
             a[j]=a[i];
             a[i]=t;
         }
        }
    }
    for(i=0;i<d;i++)
    {
        printf("%d",a[i]);
    }
    for(i=n-1;i>=d;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
   }
