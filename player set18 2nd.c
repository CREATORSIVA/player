#include <stdio.h>
int main()
{
    int n,a[100],i=0,rem,j,m,t;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        a[i]=rem;
        i++;
        n/=10;
       
    }
    for(j=0;j<i;j++)
    {
        for(m=j+1;m<i;m++)
        {
            if(a[m]>a[j])
            {
                t=a[j];
                a[j]=a[m];
                a[m]=t;
             }
        }
    }
    for(j=0;j<i;j++)
      printf("%d",a[j]);
   
}    
