#include<stdio.h>
void main()
{
long int num,r,i,j,p,fact=1,fact1=1;
scanf("%ld %ld",&num,&r);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
for(i=1;i<=num-r;i++)
{
fact1=fact1*i;
}
p=fact/fact1;
printf("%ld",p);
}
