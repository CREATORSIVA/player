#include <stdio.h>

void main()
{
   int c[1000],b[10000],n,temp,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
   for(i=0;i<n;i++)
    b[i]=c[i];
  for(i=0;i<n;i++)
        for(j=i;j<n;j++)
     
          if(c[i]>c[j])
          {
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
            }
    
   for(i=0;i<n;i++)
  for(j=0;j<n;j++)
      
       if(c[i]==b[j])
         printf("%d ",j+1);
     

}
