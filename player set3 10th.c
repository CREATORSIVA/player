#include <stdio.h>

int main()
{
    char a[30],b[30],len1=0,len2=0,k=0,len3=0,c=0,c1=0,i;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&k);
    len1=strlen(a);
    len2=strlen(b);
    if(len1<100000 && len2<100000)
    for(i=0;i<len1;i++)
       {
            if(a[i]==b[i])
              {
                  c++;
              }
              else
              {
                  c1++;
              }
             
       }
       if(c1==k)
             {
                 printf("yes");
             }
             else
             {
                 printf("no");
             }
       
    
   
    return 0;
}
