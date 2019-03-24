#include <stdio.h>

void main()
{
    int n1,n2,rem,rem1,p=1,pow1=1,product,rem2,c=0,bin=0,bin1=0;
    scanf("%d %d",&n1,&n2);
    while(n1)
    {
        rem=n1%2;
        bin=bin+rem*p;
        n1=n1/2;
        p=p*10;
    }
    while(n2)
    {
        rem1=n2%2;
        bin1=bin1+rem1*pow1;
        n2=n2/2;
        pow1=pow1*10;
    }
    product=bin*bin1;
while(product)
{
    rem2=product%10;
    product=product/10;
    if(rem2==1)
       c++;
    
}
printf("%d",c);
   
}
