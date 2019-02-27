#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,n,x,c=0,a[40];
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++)

{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==x)
        {
            c+=1;
        }
    }
}
if(c>0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
