
#include<stdio.h>

void main()
{
    int a[100],i,num,k,f=0,c;
 
    
    scanf("%d %d",&num,&k);
    for(i=0;i<num;i++)
     scanf("%d",&a[i]);
    
    c=a[0];
    for(i=0;i<num;i++)
    {
        if(a[i]==k)
        {
            printf("%d",k);
            break;
        }
        else
        {
         if((a[i]>c)&&(a[i]<k))
          printf("%d",a[i]);
         
         else
          c=a[i];
         
        }
    }
 
}
