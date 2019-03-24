#include <stdio.h>

int main()
{
    int a,b,c,i=0,r,a1[100000],j,c1=0;
    scanf("%ld %ld",&a,&b);
    c=a^b;
    while(c)
    {
        r=c%2;
        c=c/2;
        a1[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(a1[j]==1)
        {
            c1++;
        }
    }
    printf("%ld",c1);
    return 0;
}
