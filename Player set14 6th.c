#include <stdio.h>

int main()
{
    int n,i,j,a[50],k,c=1;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
       if(a[i]==k)
       {
           c++;
           a[i]='$';
       }
            }
    }
    }

if(c==1)
{
    printf("no");
}
else
{
    printf("yes%d",c);
}

    return 0;
}
