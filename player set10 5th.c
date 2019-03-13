#include <stdio.h>
int main()
{
    int num,p,k,i,a[1000],b[1000],r,c=0,j,c1=0;
    scanf("%d%d%d",&num,&p,&k);
    while(num)
    {
        r=num%10;
        a[i]=r;
        i++;
        c++;
        num=num/10;
    }
    for(i=c-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
        c1++;
    }
    for(i=1;i<=c1;i++)
    {
        if(i==p)
        {
            printf("%d",b[(p-1)+k]);
        }
    }

    return 0;
}
