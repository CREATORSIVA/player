#include<stdio.h>
int main()
{
    int num,a[10000],b[10000],i,j,t;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(b[i]<b[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ",a[i]);
    }
    return 0;
}
