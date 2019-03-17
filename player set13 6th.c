#include <stdio.h>

int main()
{
    int a[1000],i,j,s,k1=0,c,n,t,b[10000];
    scanf("%d",&n);
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='*')
        {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[j]!='*')
            {
            if(a[i]==a[j])
            {
                c++;
                a[j]='*';
            }
            }
        }
        if(c<n)
        {
            b[k1]=a[i];
            k1++;
        }
        }
    }
    b[k1]=NULL;
    for(i=0;i<k1;i++)
    {
        for(j=i+1;i<k1;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
                
            }
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
