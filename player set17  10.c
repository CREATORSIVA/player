#include <stdio.h>

int main()
{
    char a[100000],b[10000];
    int i,c=1,j,k=0,max,t=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
        {
            for(j=i+1;a[j]!=NULL;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    t=a[i];
                }
            }
            if(max<c)
            {
                max=c;
            }
            c=1;
        }
    }
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
        {
            for(j=i+1;a[j]!=NULL;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
            if(c==max)
            {
                b[k]=a[i];
                k++;
            }
            c=1;
        }
    }
    printf("%d ",max);
    for(i=0;b[i]!=NULL;i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}
