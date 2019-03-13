#include <stdio.h>

int main()
{
   int a[1000],num,i,sum=0;
   scanf("%d",&num);
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<num;i++)
   {
       if(i!=num-1)
       {
       sum=sum+(a[i]+a[i+1]);
       }
   }
   printf("%d",sum);
    return 0;
}
