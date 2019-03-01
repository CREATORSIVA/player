#include <stdio.h>

int main()
{
    int n,i,a[50],j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
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
    a[0]='\0';
    for(i=1;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
