#include <stdio.h>

int main()
{
    int n,i,j,a[50],k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            k=n/i;
            if(k%2==1)
            {
                printf("%d",i);
                break;
            }
        }
    }
    

    return 0;
}
