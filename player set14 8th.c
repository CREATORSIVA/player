#include <stdio.h>

int main()
{
    int n,i=1,j,r=0;
    scanf("%d",&n);
    for(j=0;j<=n/2;j++)
    {
    i=i*2;
    if(i==n)
    {
    r=1;
    }}
    if(r==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
