#include <stdio.h>

void main()
{
    int ar[100],i,j,l,n,max=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
        l=ar[i]&ar[j];
        if(l>max)
        {
            max=l;
        }
        }
    }
    printf("%d",max);
}
