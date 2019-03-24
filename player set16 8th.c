#include <stdio.h>

int main()
{
    long int a,b,c,i=0,r,str[100000],j,s=0,c1=0;
    scanf("%ld %ld",&a,&b);
    c=a*b;
    while(c)
    {
        r=c%2;
        c=c/2;
        str[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        s++;
        if(str[j]==1)
        {
            c1++;
        }
        if(c1==2)
        {
            printf("%ld",s);
            break;
        }
    }
    return 0;
}
