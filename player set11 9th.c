#include<stdio.h>
int main()
{
    int a[10000],i,j,num,b[10000],sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=num-1;i>=0;i--)
    {
        sum=sum+a[i];
        b[j]=sum;
        j++;
    }
    for(i=num-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
