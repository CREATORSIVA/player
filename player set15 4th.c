#include <stdio.h>
void main()
{
    int a[100],num,i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
     scanf("%d",&a[i]);
   
    for(i=0;i<num;i++)
     if(a[i+1]%a[i]==0)
           printf("%d ",a[i+1]);
   

}
