#include<stdio.h>
void main()
{
    int a,b,fact=1,i,ans;
    scanf("%d %d",&a,&b);
    if(a-b<=5)
    {
    for(i=1;i<=a;i++)
     fact=fact*i;
    a=fact;
    fact=1;
    for(i=1;i<=b;i++)
    fact=fact*i;
    b=fact;
    ans=a/b;
    printf("%d",ans);
    }
  
}
