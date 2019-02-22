#include <stdio.h>

int main()
{
    int a,b,i,c=0,j;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0&&j*j==i)
            {
                c++;
            }
        }
        
    }
    printf("%d",c);
    return 0;
}
