#include <stdio.h>

void main()
{
    int num,a[10],i,j,m=0,b;
    scanf("%d",&num);
    for(i=0;i<num;i++)
      scanf("%d",&a[i]);
    for(i=0;i<num;i++)
        for(j=0;j<num;j++)
        {
            b=((a[i])|(a[j]));
            if(b>m)
               m=b;
        }
   printf("%d",m);
    
}
