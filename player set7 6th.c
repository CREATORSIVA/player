#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,n,x,c=1,a[40],b[60],k,temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    
    if(n<=100000 && k<=10000)
    for(i=0;i<n;i++)

{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)

{
   if(a[i]==k)
    {
        c+=1;
    }
    
}
if(c==1)
{
printf("%d",c);
}
else
{
    printf("%d",c-1);
}
    return 0;
}
