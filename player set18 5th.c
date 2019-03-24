#include <stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000],c[1000]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,j,c1=0,l,c2=0,l1;
    scanf("%s",a);
    scanf("%s",b);
    l=strlen(a);
    l1=strlen(b);
    c2=l+l1;
    if(c2==26)
    {
    for(i=0;b[i]!=NULL;i++)
    {
    a[l]=b[i];
    l++;
    }
    for(i=0;c[i]!=NULL;i++)
    {
        if(c[i]!='*')
        {
        for(j=0;j<l;j++)
        {
            if(a[j]!='*')
            {
            if(a[j]==c[i])
            {
                c1++;
                a[j]='*';
                c[i]='*';
                
            }
            }
        }
        }
    }
    }
    if(c1==26)
    {
        printf("complementary");
    }
    else
    {
        printf("non-complementary");
    }
    return 0;
}
