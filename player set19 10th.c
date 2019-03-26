#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=(a*a)+(b*b)-(c*c);
    if(x==0)
        printf("yes");
    else
        printf("no");
        return 0;
}
