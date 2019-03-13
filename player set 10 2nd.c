#include<stdio.h>
int main()
{
    long int n,dec=0,rem,p=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        dec=dec+rem*p;
        p=p*2;
        n=n/10;
    }
    printf("%ld",dec);
    return 0;
}   
