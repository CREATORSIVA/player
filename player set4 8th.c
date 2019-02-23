#include <stdio.h>

int main()
{
    int i,j,n,c=0,a[30][40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        
            if(a[i][0]<a[i][1])
            {
                c++;
            }
        
    }
printf("%d",c);
return 0;
}
