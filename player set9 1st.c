#include <stdio.h>

void main()
{
    int ar[100],i,j,l,num,max=-1;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
        l=ar[i]&ar[j];
        if(l>max)
        {
            max=l;
        }
        }
    }
    printf("%d",max);
}
