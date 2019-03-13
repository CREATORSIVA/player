#include <stdio.h>

int main()
{
   long int num,i=0,r,a[1000],c,k;
    scanf("%ld",&num);
    while(num)
    {
        r=num%10;
        num=num/10;
        a[i]=r;
        i++;
        k=i;
    }
    c=a[0]+a[k-1];
    printf("%ld",c);
    return 0;
}
