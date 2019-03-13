#include<stdio.h>
void main()
{
long int n,r,i,j,p,fact=1,fact1=1;
scanf("%ld %ld",&n,&r);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
for(i=1;i<=n-r;i++)
{
fact1=fact1*i;
}
p=fact/fact1;
printf("%ld",p);
}
