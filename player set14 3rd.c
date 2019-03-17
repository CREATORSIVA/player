#include<stdio.h>
int main()
{
    int num,m,i,j,a,b,s=0;
    scanf("%d %d",&num,&m);
    for(i=0;i<num;i++)
    {
        scanf("%d %d",&a,&b);
        if(b==m)
        {
            s++;
        }
    }
    if(s>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
