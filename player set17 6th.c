#include<stdio.h>
void main()
{
int a,b,g=0,fact1=1,f2=1,i,m;
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
    fact1=fact1*i;
}
for(i=1;i<=b;i++)
{
    f2=f2*i;
}
       for(i=2;i<=fact1+f2;i++)
       {
           if((fact1%i==0)&&(f2%i==0))
           {
               m=i;
           }}
           printf("%d",m);
}
