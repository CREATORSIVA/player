#include<stdio.h>
void main()
{
  int n,i,a[10],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]-a[i+1]==-1)
        {
        k=a[i+1];
        }
    }
    printf("%d",k);
    getch();
}

