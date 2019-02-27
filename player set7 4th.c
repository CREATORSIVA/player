#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,n,x,c=0,a[40],b[60],k,temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    if(n<=100000)
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
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    }
}
for(i=0;i<n;i++)
{
   if(a[i]<k)
   {
       printf(" %d",a[i]);
   }
}

    return 0;
}
