#include<stdio.h>

void main()
{
int num,n1,rem,bin,count=0,power=1;

scanf("%d",&num);
n1=num;
while(n1>0)
{
    rem=n1%2;
    bin=bin+rem*power;
    n1/=2;
    count++;
    power=power*10;
}
if(num==0)
printf("1");
else
printf("%d",count);

}
