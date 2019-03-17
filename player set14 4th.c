#include<stdio.h>
int main()
{
    int n,m[10000],i,j,a,b,s[1000],q=0,min;
    scanf("%d %d %d",&n,&a,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=a;j<=b;j++)
        {
            if(m[i]==j)
            {
                s[q]=m[i];
                q++;
            }
        }
    }
    min=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(min>s[i])
        {
            min=s[i];
        }
    }
    printf("%d",min);
    return 0;
}
