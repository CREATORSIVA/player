#include <stdio.h>

int main()
{
    int i,j,n,k,rem=0,c=0;
    scanf("%d%d",&n,&k);
    if(n<=10000&&(k>=0 || k<=9))
    while(n>0)
    {
        rem=n%10;
        if(rem==k)
        {
            c++;
        }
        n=n/10;
    }
    
printf("%d",c);
    return 0;
}
