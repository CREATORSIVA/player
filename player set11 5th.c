#include <stdio.h>

void main()
{
   int a[1000],b[10000],n,temp,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
   for(i=0;i<n;i++)
    b[i]=a[i];
  for(i=0;i<n;i++)
        for(j=i;j<n;j++)
     
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
    
   for(i=0;i<n;i++)
  for(j=0;j<n;j++)
      
       if(a[i]==b[j])
         printf("%d ",j+1);
     

}
