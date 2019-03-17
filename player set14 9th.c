#include <stdio.h>

int main()
{
    long int num,r,t[1000],i,s=1,l=0;
    scanf("%ld",&num);
    while(num)
    {
        r=num%2;
        num=num/2;
        t[i]=r;
        i++;
        s=s*10;
    }
    t[i]=5;
    for(i=0;t[i]!=5;i++)
    {
        if(t[i]==1)
        {
            l++;
        }
    }
    printf("%d",l);

    return 0;
}
