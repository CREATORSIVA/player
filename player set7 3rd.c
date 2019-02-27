#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,n,x,c=0,a[40],b[60];
    scanf("%d",&n);
    
    if(n<=100000)
    for(i=0;i<n;i++)

{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)

{
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]==b[j])
        {
            printf(" %d",a[i]);
            b[j]='$';
            break;
        }
    }
    a[i]='$';
}

    return 0;
}
