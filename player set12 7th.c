#include <stdio.h>
#include<string.h>



main()
{
 
 
 char s[10000],a[10000];
  int k=0,i,l;
  scanf("%s",s);
  l=strlen(s);
  for(i=l-1;i>=0;i--)
  {
     a[k]=s[i];
     k++;
    
  }
     for(i=0;a[i]!='\0';i++)
  {
      
      if(a[i+1]!='\0')
        printf("%c-",a[i]);
           else
    printf("%c",a[i]);  
  }
  
}
