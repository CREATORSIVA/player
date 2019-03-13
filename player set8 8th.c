#include <stdio.h>
int main()
{
    int a[10],b[10],i,j,c[10],m,n,p=0,k,l,t;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {        scanf("%d",&a[i]);
}
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++)
    {
        c[p]=a[i];
        p++;
    }
    for(j=0;j<n;j++)
    {
        c[p]=b[j];
        p++;
    }
    for(k=0;k<p;k++)
    {
        for(l=k+1;l<p;l++)
        {
            if(c[k]>c[l])            {

                t=c[k];
c[k]=c[l];
                c[l]=t;
            }

        }
        printf("%d ",c[k]);
      return 0;
}
