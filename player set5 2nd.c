
#include<stdio.h>
int main()
{
    int n,a[50],i,c=0,j;
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
            c++;
        }
        }
        
    }
    if(c>0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
