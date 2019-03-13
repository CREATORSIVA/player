#include<stdio.h>
int main()
{
    int a[10000],i,j=0,num,b[10000],c[10000],sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<num;i++)
    {
        sum=sum+a[i];
        b[j]=sum;
        j++;
    }
    j=0;
    sum=0;
    for(i=num-1;i>=0;i--)
    {
        sum=sum+a[i];
        c[j]=sum;
        j++;
    }
    if(num==1)
    {
        printf("%d ",a[i]);
    }
    else
    {
    i=0;
    while(i<num)
    {
        for(j=num-1;j>=0;j--)
        {
            printf("%d ",b[i]+c[j]);
            i++;
            
        }
    }
    }
    return 0;
}
