#include<stdio.h>
void main()
{
    int a[100],i,num,b=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    b=a[0];
    for(i=0;i<num-1;i++)
        b=(b)|(a[i+1]);
    printf("%d",b);
}
