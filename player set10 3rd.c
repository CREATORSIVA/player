#include <stdio.h>

int main()
{
    int a[10000],num,i,temp;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    if(num%2==0)
    {
    for(i=0;i<num;i++)
    {
        if(i%2==0)
        {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    }
    else
    {
        for(i=0;i<num-1;i++)
    {
        if(i%2==0)
        {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
