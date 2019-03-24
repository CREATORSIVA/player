#include<stdio.h>
int main()
{
    int n,a[100],i,f,k,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
        }
        else if(a[i]>k)
        {
            f=0;
            p=a[i];
            break;
        }
    }
    if(f==0)
    {
        printf("%d",p);
    }
    return 0;
}
