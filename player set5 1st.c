#include<stdio.h>
int main()
{
    int n,k,pow=1,c=0;
    scanf("%d%d",&n,&k);
    while(pow<=n)
    {
        pow=pow*k;
        if(pow==n)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
