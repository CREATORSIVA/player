#include <stdio.h>

int main()
{
    long int a,b,c,i=0,r,str[100000],j,c1=0;
    scanf("%ld %ld",&a,&b);
    c=a|b;
    while(c)
    {
        r=c%2;
        c=c/2;
        str[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(str[j]==1)
        {
            c1++;
        }
    }
    printf("%ld",c1);
    return 0;
}
