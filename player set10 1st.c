#include <stdio.h>
int main()
{
  int num,r,bin=0,pow=1;
  scanf("%d",&num);
  while(num!=0)
  {
    r=num%2;
    bin=r*pow+bin;
    num=num/2;
    pow=pow*10;
  }
  printf("%d",bin);
  return 0;
}
