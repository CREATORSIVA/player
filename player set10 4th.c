#include <stdio.h>

int main()
{
    int num,i=0,r,j,a[1000],k,c=0;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        num=num/10;
        a[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
