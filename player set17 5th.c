#include<stdio.h>
int main()
{
    int num,a[100],i,f,k,p;
    scanf("%d %d",&num,&k);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        if(a[i]==k)
        {
            f=1;
        }
        else if(a[i]>k)
        {
            f=0;
            p=a[i];
            break;
        }
    }
    if(f==0)
    {
        printf("%d",p);
    }
    return 0;
}
