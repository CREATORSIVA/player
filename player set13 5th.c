#include <stdio.h>

void main()
{
int num,a[100],i,j,c=0,x=0;
scanf("%d",&num);
for(i=0;i<num;i++)
   scanf("%d",&a[i]);
for(i=1;i<=num;i++)
{
    c=0;
    for(j=0;j<num;j++)
    {
        
           c++;
        }
      
    }
    
    if(c==num)
    {
    x=i;
   
    }
}
   printf("%d",x);
 }
