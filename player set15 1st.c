#include <stdio.h>

void main()
{
    char a[100][100],b[100],b1[1000];
    int i,j,n,l,m,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%s",a[i]);
    
    for(i=0;i<n;i++)
    {
        strcpy(b,a[i]);
        strcpy(b1,a[i+1]);
        l=strlen(b);
        m=strlen(b1);
        if(l==m)
        {
            c=0;
        for(j=0;j<l;j++)
        {
            if(b[j]==b1[j])
              c++;
           
        }
        if(c==l)
          s=1;
        
        }
    }
    if(s==1)
      printf("yes");
   
    else
      printf("no");
   
}
