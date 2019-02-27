#include <stdio.h>

#include<string.h>

int main()

{

   int n,i,max=0,a[70],c=1,ch=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   { c=1;
       
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               c++;
               a[j]='$';
           }
       }
       if(max<c)
       {
           max=c;
           
        }
       
   }
   printf("%d",max);
   

return 0;

}
